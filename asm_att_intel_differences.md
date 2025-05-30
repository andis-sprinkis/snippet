# Differences between the Intel and the AT&T Assembly syntax

- Order of operands:

    - Intel:

        | First       | Second |
        | ----------- | ------ |
        | Destination | Source |
        | `rax`       | `0xFF` |

        ```asm
        mov rax, 0xFF
        ```

    - AT&T:

        | First  | Second      |
        | ------ | ----------- |
        | Source | Destination |
        | `0xFF` | `rax`       |

        ```asm
        movq $0xFF, %rax
        ```

        - There are exceptions:

            - ```asm
              subq %rax, %rbx
              ```

                The `sub` instruction subtracts the source operand from the destination operand.

                This line computes `rbx − rax` and stores the result in `rbx`.

            - ```asm
              cmpq $1, %rax    # compare the value 1 to the contents of rax
              jg   somelabel   # jg - jump if greater than
              ```

                Destination operand is compared against the source operand - jump if `rax > 1`.

    ***

    The Intel syntax matches closer to the common ABI rules for order of registers when passing function arguments:

    ```c
    long sum(long foo, long bar);
    // foo -> %rdi
    // bar -> %rsi
    ```

    The first argument allocates RDI (destination index) and the second argument allocates RSI (source index).

- Size of the operands in the opname of the instructions:

    - In the AT&T Assembly the opnames contain size of the operands.

        | Operand size, b | Opname suffix |
        | --------------- | ------------- |
        | 64 (quad-word)  | `q`           |
        | 32 (long-word)  | `l`           |
        | 16 (word)       | `w`           |
        | 8 (byte)        | `b`           |

        ```asm
        movl %ebx, %eax # move 32 bit value from ebx -> eax
        ```

        ```asm
        movb $1, %al  # move value 0x01 to register al
        movw $1, %ax  # move value 0x0001 to register ax
        movl $1, %eax # move value 0x00000001 to register eax
        movq $1, %rax # move value 0x0000000000000001 to register rax
        ```

    - Some operations in the Intel Assembly do require size directives.

        ```asm
        ; how many bytes?
        mov [rbp - 20], 20

        ; clarification:
        mov DWORD PTR [rbp - 20], 20 ; Move the 32-bit integer representation of 20 into 4 bytes starting at the address RBP - 20.

        mov BYTE PTR [ebx], 2 ; Move 2 into the single byte at the address stored in EBX.
        mov WORD PTR [ebx], 2 ; Move the 16-bit integer representation of 2 into the 2 bytes starting at the address in EBX.
        mov DWORD PTR [ebx], 2 ; Move the 32-bit integer representation of 2 into the 4 bytes starting at the address in EBX.
        ```

- Operand by size name differences between Intel ASM, AT&T ASM and C:

    - `sizeof(long)` in C on 64 bit machines is 64b, on older machines 32b
    - In AT&T assembly syntax a 32b number is "long-word"
    - In Intel assembly syntax a 32b number is "double-word"
    - In Intel and AT&T assembly syntax a 64b number is "quad-word"

- Register and immediate value denoting prefixes (AT&T):

    In AT&T Assembly the immediate values are prefixed with `$` and register names are prefixed with `%`.

    ```asm
    movl $25, %rdi
    ```

    Due to these prefix annotations, the AT&T Assembly output can have symbols which have the same names as registers, which enables:

    - Having a `:rax` symbol in the Assembly code.

        - Compiling Intel Assembly with such a symbol will fail:

            ```asm
            ; Invalid label 'rax'
            main:
              mov eax, ebx
              call rax
              ret
            rax:
              mov bl, cl
              ret
            ```

    - Having functions like `long rax()` named after registers in the C code.

        - Outputting C code with this symbol as the Intel Assembly will fail:

            ```c
            #include <stdio.h>

            long rax(int a, int b) {
              return 32 * a << b;
            }

            int main() {
              long a;
              a = rax(42, 42);
              printf("%ld", a);
            }

            // Error:
            // gcc -masm=intel main.c
            // A.s: Assembler messages:
            // Error: .size expression for rax does not evaluate to a constant
            ```

- Syntax of memory operands:

    | Intel                                                         | AT&T                                                   |
    | ------------------------------------------------------------- | ------------------------------------------------------ |
    | `instr bar, [base + index * scale + disp]`                    | `instr disp(base, index, scale), foo`                  |
    | `add rax, [rbx + rcx * 0x4 - 0x22]`                           | `addq -0x22(%rbx, %rcx, 0x4), %rax`                    |
    | `mov ecx, [ebx + eax * 4]`                                    | `movl (%ebx, %eax, $4), %ecx`                          |
    | `opname destination, [ base + index * scale + displacement ]` | `opname displacement(base, index, scale), destination` |

    (In AT&T the displacements aren't the same as immediate values - don't require a `$` prefix.)

- Comment format:

| Intel           | AT&T                                 |
| --------------- | ------------------------------------ |
| `; Lorem ipsum` | `# Lorem ipsum`                      |
|                 | `/* Lorem ipsum */`                  |
|                 | `/ Lorem ipsum` (start of line only) |

## Default syntax in common tools

AT&T syntax by default:

- `clang`
- `gcc`
    - ```sh
      gcc -S -masm=intel
      ```
- `gdb`

    - `$HOME/.config/gdb/gdbinit`:

        ```
        set disassembly-flavor intel
        ```

- `objdump`

    - ```sh
      objdump -Mintel
      ```

## Resources

- [marcelofern.com/posts/asm/att-vs-intel-syntax/index.html](https://marcelofern.com/posts/asm/att-vs-intel-syntax/index.html) ([archived](https://archive.is/MmoR0))
- [Intel and ATT Assembly Syntax](https://homes.cs.washington.edu/~bodik/ucb/cs164/cs164-fall-2003/assembly.html) ([archived](https://archive.is/hesf4))
- [Guide to x86 Assembly](https://www.cs.virginia.edu/~evans/cs216/guides/x86.html) ([archived](https://archive.is/GtsZV))
    - Attribution: _Adapted from materials developed for University of Virginia cs216 by David Evans. This guide was revised for cs216 by David Evans, based on materials originally created by Adam Ferrari many years ago, and since updated by Alan Batson, Mike Lack, and Anita Jones.`_
- [docs.oracle.com/cd/E19253-01/817-5477/ennab/index.html](https://docs.oracle.com/cd/E19253-01/817-5477/ennab/index.html)

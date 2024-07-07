# NASM x86-64 data type pseudo-instructions

## `section .data`

| Type | Size, bits |        Name |
| ---- | ---------: | ----------: |
| db   |          8 |        Byte |
| dw   |         16 |        Word |
| dd   |         32 | Double word |
| dq   |         64 |    Quadword |

## `section .bss`

| Type | Size, bits |        Name |
| ---- | ---------: | ----------: |
| resb |          8 |        Byte |
| resw |         16 |        Word |
| resd |         32 | Double word |
| resq |         64 |    Quadword |

## Resources

-   [NASM - The Netwide Assembler](https://www.nasm.us/doc/nasmdoc3.html#section-3.2)

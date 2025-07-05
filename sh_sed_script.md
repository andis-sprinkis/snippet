# `sed` scripting

The information below is copied and heavily edited for the personal reference from the [Lecture 4 - Regular Expressions: grep, sed and awk](https://cse.sc.edu/~conradp/csce215/lect4.pdf) lecture material, originally published by [Philip Conrad](https://cse.sc.edu/~conradp/) from the [University of South Carolina](https://sc.edu).

---

All editing commands in a sed script are applied in order to each input line.

- If a command changes the input, subsequent command address will be applied to the current (modified) line in the pattern space, not the original input line.
- The original input file is unchanged (sed is a filter), and the results are sent to standard output (but can be redirected to a file).

## Scripts

- A script is nothing more than a file of commands

- Each command consists of up to two addresses and an action, where the address can be a regular expression or line number.

    ```
    address action command
    ```

    ```sed
    [address[, address]][!]command [arguments]
    ```

- As each line of the input file is read, sed reads the first command of the script and checks the address against the current input line:

    - if there is a match, the command is executed
    - if there is no match, the command is ignored
    - sed then repeats this action for every command in the script file

- When it has reached the end of the script, sed outputs the current line (pattern space) unless the -n option has been set

### Flow control

- sed then reads the next line in the input file and restarts from the beginning of the script file
- All commands in the script file are compared to, and potentially act on, all lines in the input file

### Commands

- sed commands have the general form `[address[, address]][!]command [arguments]`
- sed copies each input line into a pattern space
    - If the address of the command matches the line in the pattern space, the command is applied to that line
    - If the command has no address, it is applied to each line as it enters pattern space
    - If a command changes the line in pattern space, subsequent commands operate on the modified line
- When all commands have been read, the line in pattern space is written to standard output and a new line is read into pattern space
- command is a single letter
- Example: Deletion: `d`
- `[address1][,address2]d`
    - Delete the addressed line(s) from the pattern space; line(s) not passed to standard output.
    - A new line of input is read and editing resumes with the first command of the script.

### Addressing

- An address can be either a line number or a pattern, enclosed in slashes (`/pattern/`)
- A pattern is described using regular expressions (BREs, as in `grep`)
- If no pattern is specified, the command will be applied to all lines of the input file
- To refer to the last line: `$`
- Most commands will accept two addresses
    - If only one address is given, the command operates only on that line
    - If two comma separated addresses are given, then the command operates on a range of lines between the first and second address, inclusively
- The `!` operator can be used to negate an address, ie; `address!command` causes command to be applied to all lines that do not match address

### Address and command examples

- `d` deletes the all lines
- `6d` deletes line 6
- `/^$/d` deletes all blank lines
- `1,10d` deletes lines 1 through 10
- `1,/^$/d` deletes from line 1 through the first blank line
- `/^$/,$d` deletes from the first blank line through
  the last line of the file
- `/^$/,10d` deletes from the first blank line through line 10
- `/^ya*y/,/[0-9]$/d` deletes from the first line that begins with `yay`, `yaay`, `yaaay`, etc. through the first line that ends with a digit

### Multiple commands

- Braces `{}` can be used to apply multiple commands to an address:

    ```sed
    [/pattern/[,/pattern/]]{
    command1
    command2
    command3
    }
    ```

- Strange syntax:
    - The opening brace must be the last character on a line
    - The closing brace must be on a line by itself
    - Make sure there are no spaces following the braces

## `sed` commands

- Although sed contains many editing commands, we are only going to cover the following subset:
    - `p` - print
    - `r` - read
    - `w` - write
    - `y` - transform
    - `q` - quit
    - `s` - substitute
    - `a` - append
    - `i` - insert
    - `c` - change
    - `d` - delete

## `sed` syntax

- Syntax:
    ```
    sed [-n] [-e] [‘command’] [file…]
    sed [-n] [-f scriptfile] [file…]
    ```
- `-n` - only print lines specified with the print command (or the `p` flag of the substitute (`s`) command)
- `-f` scriptfile - next argument is a filename containing editing commands
- `-e` command - the next argument is an editing command rather than a filename, useful if multiple commands are specified
- If the first line of a scriptfile is `#n`, sed acts as though `-n` had been specified

## Print

- The Print command (`p`) can be used to force the pattern space to be output, useful if the `-n` option has been specified
- Syntax: `[address1[,address2]]p`
- Note: if the `-n` or `#n` option has not been specified, p will cause the line to be output twice!
- Examples:
    - `1,5p` will display lines 1 through 5
    - `/^$/,$p` will display the lines from the first blank line through the last line of the file

## Substitute

- Syntax: `[address(es)]s/pattern/replacement/ [flags]`
    - pattern - search pattern
    - replacement - replacement string for pattern
    - flags - optionally any of the following
        - `n` a number from 1 to 512 indicating which occurrence of pattern should be replaced
        - `g` global, replace all occurrences of pattern in pattern space
        - `p` print contents of pattern space

## Substitute examples

- `s/Puff Daddy/P. Diddy/`
    - Substitute `P. Diddy` for the first occurrence of `Puff Daddy` in pattern space
- `s/Tom/Dick/2`
    - Substitutes `Dick` for the second occurrence of `Tom` in the pattern space
- `s/wood/plastic/p`
    - Substitutes `plastic` for the first occurrence of `wood` and outputs (prints) pattern space

## Replacement patterns

- Substitute can use several special characters in the replacement string
    - `&` - replaced by the entire string matched in the regular expression for pattern
    - `\n` - replaced by the nth substring (or subexpression) previously specified using `\(` and `\)`
    - `\` - used to escape the ampersand (`&`) and the backslash (`\`)

## Replacement pattern examples

1. ```
   the UNIX operating system …
   ```

    ```sed
    s/.NI./wonderful &/
    ```

    ```
    the wonderful UNIX operating system …
    ```

1. ```sh
   cat test1
   ```

    ```
    first:second
    one:two
    ```

    ```sh
    sed 's/\(.*\):\(.*\)/\2:\1/' test1
    ```

    ```
    second:first
    two:one
    ```

1. ```sh
   sed 's/\([[:alpha:]]\)\([^ \n]*\)/\2\1ay/g'
   ```

    Pig Latin (`unix is fun` -> `nixuay siay unfay`)

## Append, insert, and change

- Syntax for these commands is a little strange because they must be specified on multiple lines
- append

    ```sed
    [address]a\
    text
    ```

- insert

    ```sed
    [address]i\
    text
    ```

- change
    ```sed
    [address(es)]c\
    text
    ```
- append/insert for single lines only, not range

## Append and insert

## Change

## Change examples

## Using `!`

## Transform

## Pattern and hold spaces

## Quit

## `sed` drawbacks

- Hard to remember text from one line to another
- Not possible to go backward in the file
- No way to do forward references like `/..../+1`
- No facilities to manipulate numbers

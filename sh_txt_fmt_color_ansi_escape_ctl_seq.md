# Terminal text formatting using the ANSI control sequences

The control sequence for formatting text in \*nix terminal consists of:

- _Control sequence introducer_ (CSI)

    The _CSI_ for calling a function is made of one the byte `27 033 0x1b ESC` escape sequences and the
    character `[`.

    Either - `\x1b[`, `\033[`, `\e[`.

- _Set graphics mode_ (SGR) function

    The _SGR_ function - `m`, prefixed with one or more of it's arguments - the formatting codes, separated with `;`.

    For example - `0;35m`.

## The formatting codes

| Format                         | Code |
| ------------------------------ | ---: |
| Reset                          |    0 |
| Bold (or bright)               |    1 |
| Faint                          |    2 |
| Italic                         |    3 |
| Underline                      |    4 |
| Slow blink                     |    5 |
| Swap background and foreground |    7 |
| Hidden                         |    8 |
| Strikethrough                  |    9 |
| Bright background black        |  100 |
| Bright background blue         |  104 |
| Bright background cyan         |  106 |
| Bright background green        |  102 |
| Bright background magenta      |  105 |
| Bright background red          |  101 |
| Bright background white        |  107 |
| Bright background yellow       |  103 |
| Bright foreground black        |   90 |
| Bright foreground blue         |   94 |
| Bright foreground cyan         |   96 |
| Bright foreground green        |   92 |
| Bright foreground magenta      |   95 |
| Bright foreground red          |   91 |
| Bright foreground white        |   97 |
| Bright foreground yellow       |   93 |
| Dark background black          |   40 |
| Dark background blue           |   44 |
| Dark background cyan           |   46 |
| Dark background default        |   49 |
| Dark background green          |   42 |
| Dark background magenta        |   45 |
| Dark background red            |   41 |
| Dark background white          |   47 |
| Dark background yellow         |   43 |
| Dark foreground black          |   30 |
| Dark foreground blue           |   34 |
| Dark foreground cyan           |   36 |
| Dark foreground default        |   39 |
| Dark foreground green          |   32 |
| Dark foreground magenta        |   35 |
| Dark foreground red            |   31 |
| Dark foreground white          |   37 |
| Dark foreground yellow         |   33 |

## An example

```sh
printf "\x1b[0;35m%s\x1b[0m" "Hello world"
```

|         Token | Type                     | Action                                           |
| ------------: | ------------------------ | ------------------------------------------------ |
|       `\x1b[` | CSI                      | Introducing a control sequence                   |
|           `0` | SGR function param. list | Resetting the formatting for following text      |
|           `;` | SGR function param. list | Delimiter                                        |
|          `35` | SGR function param. list | Setting the following text foreground to magenta |
|           `m` | SGR function             | Function call                                    |
| `Hello world` |                          |                                                  |
|       `\x1b[` | CSI                      | Introducing a control sequence                   |
|           `0` | SGR function param. list | Resetting the formatting for following text      |
|           `m` | SGR function             | Function call                                    |

## Resources

- [Everything you never wanted to know about ANSI escape codes](https://notes.burke.libbey.me/ansi-escape-codes/)
  ([archived](https://archive.is/20210203094825/https://notes.burke.libbey.me/ansi-escape-codes/))
- [ANSI code generator](https://ansi.gabebanks.net/)

# Terminal text formatting using the ANSI control sequences

The control sequence consists of:

-   _Control sequence introducer_ (CSI)

    The _CSI_ for calling a function is made of one the byte `27 0x1b ESC` escape sequences and the
    character `[`.

    Either - `\x1b[`, `\033[`, `\e[`.

-   _Set graphics mode_ (SGR) function

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
| Default foreground             |   39 |
| Default background             |   49 |
| Black foreground               |   30 |
| Blue foreground                |   34 |
| Cyan foreground                |   36 |
| Green foreground               |   32 |
| Magenta foreground             |   35 |
| Red foreground                 |   31 |
| White foreground               |   37 |
| Yellow foreground              |   33 |
| Black background               |   40 |
| Blue background                |   44 |
| Cyan background                |   46 |
| Green background               |   42 |
| Magenta background             |   45 |
| Red background                 |   41 |
| White background               |   47 |
| Yellow background              |   43 |
| Black bright foreground        |   90 |
| Blue bright foreground         |   94 |
| Cyan bright foreground         |   96 |
| Green bright foreground        |   92 |
| Magenta bright foreground      |   95 |
| Red bright foreground          |   91 |
| White bright foreground        |   97 |
| Yellow bright foreground       |   93 |
| Black bright background        |  100 |
| Blue bright background         |  104 |
| Cyan bright background         |  106 |
| Green bright background        |  102 |
| Magenta bright background      |  105 |
| Red bright background          |  101 |
| White bright background        |  107 |
| Yellow bright background       |  103 |

## An example

```sh
printf "\x1b[0;35mHello world\x1b[0m"
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

-   [Everything you never wanted to know about ANSI escape codes](https://notes.burke.libbey.me/ansi-escape-codes/)
    ([archived](https://archive.is/20210203094825/https://notes.burke.libbey.me/ansi-escape-codes/))
-   [ANSI code generator](https://ansi.gabebanks.net/)

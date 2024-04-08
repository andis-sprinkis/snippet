# Terminal text formatting using the ANSI control sequences

The control sequence consists of the _Control sequence introducer_ (CSI) and the _Set graphics mode_ (SGR) function.

The CSI for calling a function is composed of one of the `byte 27 0x1b ESC` representations and `[` - as `\x1b[`, `\033[` or `\e[`.

The SGR function - `m`, prefixed with one or more of it's arguments, separated with `;`.

Formatting codes:

| Format                    | Code |
| ------------------------- | ---: |
| Reset                     |    0 |
| Bold (or bright)          |    1 |
| Italic                    |    3 |
| Underline                 |    4 |
| Strikethrough             |    9 |
| Default foreground        |   39 |
| Default background        |   49 |
| Black foreground          |   30 |
| Blue foreground           |   34 |
| Cyan foreground           |   36 |
| Green foreground          |   32 |
| Magenta foreground        |   35 |
| Red foreground            |   31 |
| White foreground          |   37 |
| Yellow foreground         |   33 |
| Black background          |   40 |
| Blue background           |   44 |
| Cyan background           |   46 |
| Green background          |   42 |
| Magenta background        |   45 |
| Red background            |   41 |
| White background          |   47 |
| Yellow background         |   43 |
| Black bright foreground   |   90 |
| Blue bright foreground    |   94 |
| Cyan bright foreground    |   96 |
| Green bright foreground   |   92 |
| Magenta bright foreground |   95 |
| Red bright foreground     |   91 |
| White bright foreground   |   97 |
| Yellow bright foreground  |   93 |
| Black bright background   |  100 |
| Blue bright background    |  104 |
| Cyan bright background    |  106 |
| Green bright background   |  102 |
| Magenta bright background |  105 |
| Red bright background     |  101 |
| White bright background   |  107 |
| Yellow bright background  |  103 |

Resetting the current formatting and setting the following text foreground to magenta using the control sequence `\x1b[0;35m`:

```sh
echo "\x1b[0;35mHello world\!"
```

## Resources

-   [Everything you never wanted to know about ANSI escape codes](https://notes.burke.libbey.me/ansi-escape-codes/)
    ([archived](https://archive.is/20210203094825/https://notes.burke.libbey.me/ansi-escape-codes/))
-   [ANSI code generator](https://ansi.gabebanks.net/)

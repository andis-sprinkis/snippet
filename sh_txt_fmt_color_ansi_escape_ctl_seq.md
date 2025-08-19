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

|         _n_ | Format                                                        | Note                       |
| ----------: | ------------------------------------------------------------- | -------------------------- |
|         `0` | Reset                                                         |                            |
|             |                                                               |                            |
|         `1` | Bold or increased intensity                                   |                            |
|         `2` | Faint                                                         |                            |
|         `3` | Italic                                                        |                            |
|         `4` | Underlined                                                    |                            |
|         `5` | Slow blinking                                                 |                            |
|         `6` | Rapid blinking                                                |                            |
|         `7` | Reverse video or invert                                       |                            |
|         `8` | Concealed or hidden                                           |                            |
|         `9` | Crossed out or strikethrough                                  |                            |
|        `10` | Primary (default) font                                        |                            |
|             |                                                               |                            |
| `11` - `19` | Alternative font n - `10`                                     |                            |
|             |                                                               |                            |
|        `20` | Fraktur (Gothic)                                              |                            |
|        `21` | Not underlined or not bold                                    |                            |
|        `22` | Not bold or increased instensity (normal intensity)           |                            |
|        `23` | Not italic                                                    |                            |
|        `23` | Not italic, nor blackletter                                   |                            |
|        `24` | Not underlined                                                |                            |
|        `25` | Not blinking                                                  |                            |
|        `26` | Proportional spacing                                          |                            |
|        `27` | Not reverse video or invert                                   |                            |
|        `28` | Not concealed or hidden                                       |                            |
|        `29` | Not crossed out or strikethrough                              |                            |
|        `50` | Not proportional spacing                                      |                            |
|        `51` | Framed                                                        |                            |
|        `52` | Encircled                                                     |                            |
|        `53` | Overlined                                                     |                            |
|        `55` | Not overlined                                                 |                            |
|             |                                                               |                            |
|        `60` | Ideogram underline or right side line                         | Rarely supported           |
|        `61` | Ideogram double underline, _or_ double line on the right side | Rarely supported           |
|        `62` | Ideogram overline or left side line                           | Rarely supported           |
|        `63` | Ideogram double overline, _or_ double line on the left side   | Rarely supported           |
|        `64` | Ideogram stress marking                                       | Rarely supported           |
|        `65` | No ideogram attributes                                        | Reset the `60`–`64`        |
|             |                                                               |                            |
|        `73` | Superscript                                                   | Implemented only in mintty |
|        `74` | Subscript                                                     |                            |
|        `75` | Neither superscript nor subscript                             |                            |
|             |                                                               |                            |
|        `38` | Set background color                                          |                            |
|        `48` | Set background color                                          |                            |
|        `58` | Set underline color                                           |                            |
|             |                                                               |                            |
|        `39` | Default foreground color                                      |                            |
|        `49` | Default background color                                      |                            |
|        `59` | Default underline color                                       |                            |
|             |                                                               |                            |
|        `30` | ⬛ Dark foreground black                                      |                            |
|        `31` | 🟥 Dark foreground red                                        |                            |
|        `32` | 🟩 Dark foreground green                                      |                            |
|        `33` | 🟨 Dark foreground yellow                                     |                            |
|        `34` | 🟦 Dark foreground blue                                       |                            |
|        `35` | 🟪 Dark foreground magenta                                    |                            |
|        `36` | 🟦 Dark foreground cyan                                       |                            |
|        `37` | ⬜ Dark foreground white                                      |                            |
|             |                                                               |                            |
|        `40` | ⬛ Dark background black                                      |                            |
|        `41` | 🟥 Dark background red                                        |                            |
|        `42` | 🟩 Dark background green                                      |                            |
|        `43` | 🟨 Dark background yellow                                     |                            |
|        `44` | 🟦 Dark background blue                                       |                            |
|        `45` | 🟪 Dark background magenta                                    |                            |
|        `46` | 🟦 Dark background cyan                                       |                            |
|        `47` | ⬜ Dark background white                                      |                            |
|             |                                                               |                            |
|        `90` | ⬛ Bright foreground black                                    |                            |
|        `91` | 🟥 Bright foreground red                                      |                            |
|        `92` | 🟩 Bright foreground green                                    |                            |
|        `93` | 🟨 Bright foreground yellow                                   |                            |
|        `94` | 🟦 Bright foreground blue                                     |                            |
|        `95` | 🟪 Bright foreground magenta                                  |                            |
|        `96` | 🟦 Bright foreground cyan                                     |                            |
|        `97` | ⬜ Bright foreground white                                    |                            |
|             |                                                               |                            |
|       `100` | ⬛ Bright background black                                    |                            |
|       `101` | 🟥 Bright background red                                      |                            |
|       `102` | 🟩 Bright background green                                    |                            |
|       `103` | 🟨 Bright background yellow                                   |                            |
|       `104` | 🟦 Bright background blue                                     |                            |
|       `105` | 🟪 Bright background magenta                                  |                            |
|       `106` | 🟦 Bright background cyan                                     |                            |
|       `107` | ⬜ Bright background white                                    |                            |

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

- [ANSI escape code - Wikipedia](https://en.wikipedia.org/wiki/ANSI_escape_code#SGR)
- [Everything you never wanted to know about ANSI escape codes](https://notes.burke.libbey.me/ansi-escape-codes/)
  ([archived](https://archive.is/20210203094825/https://notes.burke.libbey.me/ansi-escape-codes/))
- [ANSI code generator](https://ansi.gabebanks.net/)

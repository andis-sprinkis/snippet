# Using \*nix shell command escape sequences to set the terminal emulator window title

```sh
win_title="\033]0;Hello world\!\007"
echo "$win_title"
```

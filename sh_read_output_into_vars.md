# Reading a *nix shell command output into variables

```sh
{ read first_word second_word; } < <(echo "hello world")
```

A space is the shell default `IFS` value. For `,` values use:

```sh
{ IFS="," read first_word second_word; } < <(echo "hello,world")
```

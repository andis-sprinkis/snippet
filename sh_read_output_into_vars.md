# Reading a *nix shell command delimeted output into variables

```sh
{ read first_word second_word; } < <(echo "hello world")
```

A space is the shell default `IFS` delimeter value.

For `,` delimeted values use:

```sh
{ IFS="," read first_word second_word; } < <(echo "hello,world")
```

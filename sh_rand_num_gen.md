# Generating a *random* number in Shell

Print a 1 byte unsigned decimal integer:

```sh
od -vAn -N1 -tu1 < "/dev/urandom" | tr -d ' '
```

Print a 2 byte unsigned decimal integer:

```sh
od -vAn -N2 -tu2 < "/dev/urandom" | tr -d ' '
```

Print a 4 byte unsigned decimal integer:

```sh
od -vAn -N4 -tu4 < "/dev/urandom" | tr -d ' '
```

Print a 1 byte signed decimal integer:

```sh
od -vAn -N1 -td1 < "/dev/urandom" | tr -d ' '
```

Print an unsigned decimal integer in the range of 55 to 359:

```sh
shuf --random-source="/dev/urandom" -n "5" -i "55-359"
```

Print (*at most* - exhaustive, non-repeating) 5 unsigned decimal integers in the range of 55 to 359:

```sh
shuf --random-source="/dev/urandom" -n "5" -i "55-359"
```

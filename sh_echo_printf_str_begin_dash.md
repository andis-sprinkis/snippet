# Printing a string that begins with a dash (`-`) character in Shell

The most commonly used `echo` implementations violate the POSIX standard that doesn't allow the `-` options. This breaks
printing strings that begin with `-`.

`printf` should be used instead:

```sh
printf "%s\n" "-example"
```

Output:

```
-example
```

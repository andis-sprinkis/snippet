# Setting `bc` as a base 16 calculator in Shell

Set `bc` to take a base 16 input `ABCDEF-CDEF` and produce a base 16 output:

```sh
echo 'obase = 16; ibase = 16; ABCDEF-CDEF' | \bc 
```

Output:

```sh
AB0000
```

⚠️ The `obase` variable definition must precede the `ibase` variable definition to pass both values in base 10.

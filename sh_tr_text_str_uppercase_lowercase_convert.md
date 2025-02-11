# Converting a string between uppercase and lowercase letters in Shell

Convert a string `lorem ipsum` to uppercase letters:

```sh
echo "lorem ipsum" | tr '[:lower:]' '[:upper:]'
```

Output:

```
LOREM IPSUM
```

Convert a string `LOREM IPSUM` to lowercase letters:

```sh
echo "LOREM IPSUM" | tr '[:upper:]' '[:lower:]'
```

Output:

```
lorem ipsum
```

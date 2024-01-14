# Count lines and characters of a shell command output using wc

Count lines in the echo output:

```sh
file="hello
world"

echo "$file" | wc -l
```

Print the longest line length of the echo output:

```sh
file="hello
world"

echo "$file" | wc -L
```

Print count of the characters of the echo output:

```sh
file="hello
world"

echo "$file" | wc -m
```

Print count lines in each file and all files in the current directory:

```sh
wc -l *
```

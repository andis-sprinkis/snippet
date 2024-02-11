# Finding and processing file and directory paths using `find`

Find files or directories by name:

```sh
find -name '*.md'
```

Find files or directories by name, given a starting path:

```sh
find "./" -name '*.md'
```

Find files or directories by path:

```sh
find -path '**/HELLO/**/*.md'
```

Find files or directories by name OR path:

```sh
find -name '*.md' -or- -path '**/HELLO/**/*.md'
```

Find files by name:

```sh
find -type "f" -name '*.md'
```

Find directories by name:

```sh
find -type "d" -name 'doc'
```

Find files by name, loop through the list and print the line count of each file:

-   Using the option `-exec`:
    ```sh
    find -type "f" -name '*.md' -exec wc -l {} \;
    ```
    `{}` is the placeholder for the file path in the loop.
-   Using the shell `while` loop:
    ```sh
    find -type "f" -name '*.md' | while read -r ln; do wc -l "$ln"; done
    ```

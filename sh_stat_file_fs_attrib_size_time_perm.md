# Printing the file file-system attributes (size, creation and modification time, user and group permissions, owner)

Print the file `./example.txt` attributes summary:

```sh
stat "./example.txt"
```

Print the file `./example.txt` size:

-   In bytes:
    ```sh
    stat --format="%s" "./example.txt"
    ```
-   In MB:
    -   Using `bc`:
        ```sh
        echo "scale=8; $(stat --format=%s "./example.txt") / 1024 / 1024" | bc | sed -e 's/^-\./-0./g' -e 's/^\./0./g'
        ```
    -   Using `awk`:
        ```sh
        awk "BEGIN { printf \"%.8f\n\", $(stat --format=%s "./example.txt") / 1024 / 1024 }"
        ```

Print the file `./example.txt` creation time:

```sh
stat --format="%w" "./example.txt"
```

Print the file `./example.txt` modification time:

```sh
stat --format="%y" "./example.txt"
```

Print the file `./example.txt` user and group permissions (mode bits):

-   Human-readable form:
    ```sh
    stat --format="%A" "./example.txt"
    ```
-   Octal:
    ```sh
    stat --format="%a" "./example.txt"
    ```

Print the file `./example.txt` user name:

```sh
stat --format="%U" "./example.txt"
```

Print the file `./example.txt` user ID:

```sh
stat --format="%u" "./example.txt"
```

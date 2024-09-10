# Printing a line of a repeated character in Shell

Printing a line with the character `-` repeated 60 times:

-   Using `head` and `tr`:
    ```sh
    head -c 60 < /dev/zero | tr '\0' '-'; echo
    ```
-   Using `dd` and `tr`:
    ```sh
    dd if=/dev/zero bs=60 count=1 2>/dev/null | tr '\0' "-"; echo
    ```
-   Using `printf` and `tr`:
    ```sh
    printf "%60s" | tr " " "-"; echo
    ```

Output:

```
------------------------------------------------------------
```

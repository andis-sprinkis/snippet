# Printing a text string specific amount of times in Shell

Print string `example text` 5 times:

-   Using `printf`:

    ```sh
    # Space delimiter
    printf 'example text %.0s' $(seq "5")

    # Newline delimiter
    printf 'example text\n%.0s' $(seq "5")
    ```

-   Using `for` loop and `echo`:

    ```sh
    # Newline delimiter
    for i in $(seq "5"); do echo "example text"; done
    ```

-   Using `for` loop and `printf`:

    ```sh
    # Space delimiter
    for i in $(seq "5"); do printf '%s ' "example text"; done

    # Newline delimiter
    for i in $(seq "5"); do printf '%s\n' "example text"; done
    ```

-   Using `seq` and `awk`

    ```sh
    # Space delimiter
    seq "5" | awk '{ printf "example text " }'

    # Newline delimiter
    seq "5" | awk '{ print "example text" }'
    ```

---

TODO:

-   Check POSIX compatibility
-   Remove traling space
-   Add `while -ne` loop example
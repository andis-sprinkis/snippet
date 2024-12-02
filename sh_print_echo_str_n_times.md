# Printing a text string specific amount of times in Shell

Print string `example text` 5 times:

-   Using `printf`:

    ```sh
    # Space delimiter
    printf 'example text %.0s' $(seq "5")
    ```
    
    ```sh
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
    ```
    
    ```sh
    # Newline delimiter
    for i in $(seq "5"); do printf '%s\n' "example text"; done
    ```

-   Using `while` loop and `printf`:

    ```sh
    # Space delimiter
    i="1" j="5"; while [ "$i" -le "$j" ]; do i="$((i + "1"))"; printf "%s " "example text"; done
    ```
    
    ```sh
    # Newline delimiter
    i="1" j="5"; while [ "$i" -le "$j" ]; do i="$((i + "1"))"; printf "%s " "example text"; done
    ```

-   Using `seq` and `awk`

    ```sh
    # Space delimiter
    seq "5" | awk '{ printf "example text " }'
    ```
    
    ```sh
    # Newline delimiter
    seq "5" | awk '{ print "example text" }'
    ```

---

TODO:

-   Check POSIX compatibility
-   Remove the trailing space

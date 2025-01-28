# Merging newline character separated text lines with a space character delimeter in Shell

Input lines:

```sh
list="lorem
ipsum
dolor"
```

- Using `paste`:

    ```sh
    echo "$list" | paste -s -d ' ' -
    # or
    cat list.txt | paste -s -d ' ' -
    ```

- Using `echo` without quotes:

    ```sh
    echo $list
    # or
    echo $(cat list.txt)
    ```

    :warning: Several issues with this approach according to a comment by `dave_thompson_085` on a [StackOverlow answer](https://unix.stackexchange.com/a/657005):

    > \[Does not work\] if there are multiple (adjacent) spaces, or empty or all-space lines, or any word in the file contains shell 'glob' characters/constructs (`* ? [..]`) that match any file(s) in the current directory, or depending on your shell sometimes even if they don't match. Or if the file size exceeds approximately `ARG_MAX` on shells where `echo` isn't builtin.

Output:

```
lorem ipsum dolor
```

# Conditionally reading lines from arguments or the standard input in a Shell script or function

Define a function `replace_aaa_bbb` that can accept both the an argument `$1` and the standard input:

```sh
replace_aaa_bbb() {
  if [ "${1:-""}" ]; then
    printf '%s' "$1" | sed -e 's/AAA/BBB/g'
    return
  fi

  while read -r l; do
    printf '%s' "$l" | sed -e 's/AAA/BBB/g'
  done
}
```

Processing the argument `$1` takes precendence over processing standard input via `read` in this implementation.

Call the function:

- With an argument:

    ```sh
    replace_aaa_bbb "AAA"
    ```

- By piping text as standard input:

    ```sh
    echo "AAA" | replace_aaa_bbb
    ```

Output:

```
BBB
```

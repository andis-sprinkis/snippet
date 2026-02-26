# Testing if string is an integer number in Shell

Matching unsigned integer:

```sh
case "$str" in
  ''|*[!0123456789]*)
    exit "1"
  ;;
  *)
    echo "An unsigned integer!"
  ;;
esac
```

The first case tests if the `$str` is empty or contains no numerical characters.

Matching signed integer:

```sh
case "${str#[+-]}" in
  ''|*[!0123456789]*)
    exit "1"
  ;;
  *)
    echo "A signed integer!"
  ;;
esac
```

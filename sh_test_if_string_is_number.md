# Testing if string is a number in Shell

```sh
case "$str" in
  ''|*[!0123456789]*)
    exit "1"
  ;;
  *)
    echo "A number!"
  ;;
esac
```

The first case tests if the `$str` is empty or contains no numerical characters.

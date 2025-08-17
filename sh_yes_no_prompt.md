# "Yes / No" prompt in Shell

Using hardcoded `yes` and `no` strings, case insensitive:

```sh
#!/usr/bin/env sh
set -eu
ANS=""

confirm_prompt() {
  while true; do
    printf "%s\nyes / no\n> " "$1"

    read -r input

    case "$input" in
      [yY]|[yY][eE]|[yY][eE][sS])
        ANS="yes"
        return "0"
      ;;
      [nN]|[nN][oO])
        ANS="no"
        return "0"
      ;;
    esac
  done
}

confirm_prompt "Lorem ipsum dolor sit amet?"

case "$ANS" in
  "yes")
    echo "confirmed yes"
  ;;
  "no")
    echo "confirmed no"
  ;;
esac
```

Using the `locale` defined `yes` and `no` strings, case insensitive:

```sh
#!/usr/bin/env sh
set -eu
ANS=""
yesexpr="$(set +e;locale yesexpr; set -e)" yesexpr="${yesexpr:-"^[+1yY]"}"
yesstr="$(set +e; locale yesstr; set -e)" yesstr="${yesstr:-"yes"}"
noexpr="$(set +e; locale noexpr; set -e)" noexpr="${noexpr:-"^[-0nN]"}"
nostr="$(set +e; locale nostr; set -e)" nostr="${nostr:-"no"}"

confirm_prompt() {
  while true; do
    printf "%s\n%s / %s\n> " "$1" "$yesstr" "$nostr";

    read -r input

    if printf "%s\n" "$input" | grep -Eq "$yesexpr"; then
      ANS="yes"
      return "0"
    fi

    if printf "%s\n" "$input" | grep -Eq "$noexpr"; then
      ANS="no"
      return "0"
    fi
  done
}

confirm_prompt "Lorem ipsum dolor sit amet?"

case "$ANS" in
  "yes")
    echo "confirmed yes"
  ;;
  "no")
    echo "confirmed no"
  ;;
esac
```

## Resources

- [Locale - The Open Group Base Specifications Issue 8 - IEEE Std 1003.1-2024](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap07.html)

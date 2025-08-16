# "Yes / No" prompt in Shell

Using hardcoded `yes` and `no` strings, case insensitive:

```sh
#!/usr/bin/env sh
set -eu

question="Lorem ipsum dolor sit amet?"

while true; do
  printf "%s\nyes / no\n> " "$question"

  read -r input

  case "$input" in
    [yY]|[yY][eE]|[yY][eE][sS])
      echo "yes"
      break
    ;;
    [nN]|[nN][oO])
      echo "no"
      break
    ;;
  esac
done
```

Using the `locale` defined `yes` and `no` strings, case insensitive:

```sh
#!/usr/bin/env sh
set -eu

yesexpr="$(set +e;locale yesexpr; set -e)" yesexpr="${yesexpr:-"^[+1yY]"}"
yesstr="$(set +e; locale yesstr; set -e)" yesstr="${yesstr:-"yes"}"
noexpr="$(set +e; locale noexpr; set -e)" noexpr="${noexpr:-"^[-0nN]"}"
nostr="$(set +e; locale nostr; set -e)" nostr="${nostr:-"no"}"

question="Lorem ipsum dolor sit amet?"

while true; do
  printf "%s\n%s / %s\n> " "$question" "$yesstr" "$nostr"

  read -r input

  if printf "%s\n" "$input" | grep -Eq "$yesexpr"; then
    echo "$yesstr"
    break
  fi

  if printf "%s\n" "$input" | grep -Eq "$noexpr"; then
    echo "$nostr"
    break
  fi
done
```

## Resources

- [Locale - The Open Group Base Specifications Issue 8 - IEEE Std 1003.1-2024](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap07.html)

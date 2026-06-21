# Convert from hexadecimal to octal number in Shell

```sh
#!/usr/bin/env sh
set -euf

i="1" b=""
while [ "$i" -le "${#1}" ]; do
  case "$(echo "$1" | cut -c"${i}-${i}")" in
    "0") b="${b}0000" ;;
    "1") b="${b}0001" ;;
    "2") b="${b}0010" ;;
    "3") b="${b}0011" ;;
    "4") b="${b}0100" ;;
    "5") b="${b}0101" ;;
    "6") b="${b}0110" ;;
    "7") b="${b}0111" ;;
    "8") b="${b}1000" ;;
    "9") b="${b}1001" ;;
    [Aa]) b="${b}1010" ;;
    [Bb]) b="${b}1011" ;;
    [Cc]) b="${b}1100" ;;
    [Dd]) b="${b}1101" ;;
    [Ee]) b="${b}1110" ;;
    [Ff]) b="${b}1111" ;;
  esac

  i="$((i + "1"))"
done

i="${#b}" o=""
while [ "$i" -gt "0" ]; do
  from="$((i - "2" > "0" ? i - "2" : "1"))"
  b3="$(echo "$b" | cut -c"${from}-${i}")"
  i="$((from - "1"))"

  case "${#b3}" in
    "1") b3="00${b3}" ;;
    "2") b3="0${b3}" ;;
  esac

  case "$b3" in
    "000") o="0${o}" ;;
    "001") o="1${o}" ;;
    "010") o="2${o}" ;;
    "011") o="3${o}" ;;
    "100") o="4${o}" ;;
    "101") o="5${o}" ;;
    "110") o="6${o}" ;;
    "111") o="7${o}" ;;
  esac
done

echo "$o"
```

Printing the ASCII representation of the octal number:

```sh
printf "\\${o}\n"
```

Only standard ASCII 0-127 decimal, 0-177 octal, NOT the extended ASCII (128-255 decimal, 200-377 octal).

`\ddd` is POSIX standard `printf` syntax, the hexadecimal `\xhhh` is not.

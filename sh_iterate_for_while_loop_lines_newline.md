# Parsing a new-line character separated text line-by-line in Shell

```sh
file_path="./lines.txt"
IFS_="$IFS"
NL="
"
```

Using `for` loop:

```sh
IFS="$NL"; set -f
for line in $(cat "$file_path"); do
    IFS="$IFS_"; set +f

    echo "$line"
done
IFS="$IFS_"; set +f
```

⚠️ [DontReadLinesWithFor - Greg's Wiki](https://mywiki.wooledge.org/DontReadLinesWithFor) ([archived](https://archive.is/20250727151121/https://mywiki.wooledge.org/DontReadLinesWithFor))

Using `while` loop:

```sh
IFS="$NL"
while read -r line; do
    IFS="$IFS_"

    echo "$line"
done < "$file_path"
IFS="$IFS_"
```

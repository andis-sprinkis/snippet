# Parsing a new-line character separated text line-by-line in Shell

```sh
file_path="./lines.txt"
IFS_="$IFS"
```

Using `for` loop:

```sh
IFS="
"
for line in $(cat "$file_path"); do
    IFS="$IFS_"

    echo "$line"
done
IFS="$IFS_"
```

⚠️ [DontReadLinesWithFor - Greg's Wiki](https://mywiki.wooledge.org/DontReadLinesWithFor) ([archived](https://archive.is/20250727151121/https://mywiki.wooledge.org/DontReadLinesWithFor))

Using `while` loop:

```sh
IFS="
"
while read -r line; do
    IFS="$IFS_"

    echo "$line"
done < "$file_path"
IFS="$IFS_"
```

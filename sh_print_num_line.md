# Finding line numbers of a string and printing the line at a line number in a file, via shell script

Print line numbers of the exactly matching lines (2 and 3):

```sh
lines="qqq
AAA
AAA"

echo "$lines" | grep --line-number -x "AAA" | cut -d ":" -f 1
```

Print line at the line number 2:

```sh
lines="qqq
AAA"

sed "2!d"
```

Print lines 2 to 4:

```sh
lines="qqq
AAA
AAA
AAA"

sed "2,4!d"
```

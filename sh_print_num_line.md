# Finding line numbers of a string and printing the line at a line number in a file, via shell script

Print line numbers of the exactly matching lines (2 and 3):

```sh
lines="qqq
AAA
AAA"

echo "$lines" | grep --line-number -x "AAA" | cut -d ":" -f 1
```

Print line at the line number 2, using `sed`:

```sh
lines="qqq
AAA"

echo "$lines" | sed "2q;d"
```

Print line at the line number 2, using `head` and `tail`:

```sh
lines="qqq
AAA
AAA
AAA
"

echo "$lines" | head -n +2 | tail -n +2
```

Print lines 2 to 4, using `sed`:

```sh
lines="qqq
AAA
AAA
AAA"

echo "$lines" | sed "2,4\!d"
```

Print lines 2 to 4, using `head` and `tail`:

```sh
lines="qqq
AAA
AAA
AAA
"

echo "$lines" | head -n +4 | tail -n +2
```

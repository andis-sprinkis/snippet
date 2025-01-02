# Printing newline character line-delimited blocks of text as columns in Shell

```sh
a="AAA
BBB
CCC
DDD
EEE"

b="FFF
GGG
HHH
JJJ"
```

Print the blocks of text `$a` and `$b` as 2 columns delimited by the whitespace (` `) character:

```sh
echo "$a
$b" | pr -2 -t -s' '
```

Output:

```
AAA FFF
BBB GGG
CCC HHH
DDD JJJ
EEE
```

Print the blocks of text `$a` and `$b` as 2 columns delimited by the whitespace (` `) character, collapsing input lines from horizontal (across) rather than vertical (down) direction:

```sh
echo "$a
$b" | pr -2 -a -t -s' '
```

Output:

```
AAA BBB
CCC DDD
EEE FFF
GGG HHH
JJJ
```

Print the blocks of text `$a` and `$b` as 3 columns delimited by the `###` character string:

```sh
echo "$a
$b" | pr -3 -t -s'###'
```

Output:

```
AAA###DDD###GGG
BBB###EEE###HHH
CCC###FFF###JJJ
```

Print the blocks of text `$a` and `$b` as 3 columns delimited by the `###` character string, collapsing input lines from horizontal (across) rather than vertical (down) direction:

```sh
echo "$a
$b" | pr -3 -a -t -s'###'
```

Output:

```
AAA###BBB###CCC
DDD###EEE###FFF
GGG###HHH###JJJ
```

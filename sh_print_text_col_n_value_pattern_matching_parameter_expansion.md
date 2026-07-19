# Print the delimited text line column n value using parameter expansion and pattern matching notation in Shell

```sh
#!/usr/bin/env sh
set -euf

line1="1111;2222;3333;4444;5555;6666"
line2="111;2222;33;444;555;6666"
line3="111;2222;;444;555555;6"
line4="1111111111;22222222222;33;444;555555;6"
line5=";;33;;;6"

line="$line3"

for line in "$line1" "$line2" "$line3" "$line4" "$line5"; do
  col1="$line"
  col1="${col1%;*;*;*;*;*}"
  col1="${col1#}"
  printf '%s\n' "$col1"

  col2="$line"
  col2="${col2%;*;*;*;*}"
  col2="${col2#*;}"
  printf '%s\n' "$col2"

  col3="$line"
  col3="${col3%;*;*;*}"
  col3="${col3#*;*;}"
  printf '%s\n' "$col3"

  col4="$line"
  col4="${col4%;*;*}"
  col4="${col4#*;*;*;}"
  printf '%s\n' "$col4"

  col5="$line"
  col5="${col5%;*}"
  col5="${col5#*;*;*;*;}"
  printf '%s\n' "$col5"

  col6="$line"
  col6="${col6%}"
  col6="${col6#*;*;*;*;*;}"
  printf '%s\n' "$col6"

  echo "---"
done
```

```
1111
2222
3333
4444
5555
6666
---
111
2222
33
444
555
6666
---
111
2222

444
555555
6
---
1111111111
22222222222
33
444
555555
6
---


33


6
---
```

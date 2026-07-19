# Print the delimited text line column n value using parameter expansion and pattern matching notation in Shell

```sh
#!/usr/bin/env sh
set -euf

line1="1111;2222;3333;4444;5555;6666"
line2="111;2222;33;444;555;6666"
line3="111;2222;;444;555555;6"
line4="1111111111;22222222222;33;444;555555;6"
line5=";;33;;;6"

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

---

```sh
#!/usr/bin/env sh
set -euf
NL="
"

text="1 Lorem ipsum dolor sit amet, officia excepteur ex fugiat reprehenderit enim labore culpa sint ad nisi Lorem pariatur mollit ex esse exercitation amet.
2 Nisi anim cupidatat excepteur officia. Reprehenderit nostrud nostrud ipsum Lorem est aliquip amet voluptate voluptate dolor minim nulla est proident.
3 Nostrud officia pariatur ut officia.
4 Sit irure elit esse ea nulla sunt ex occaecat reprehenderit commodo officia dolor Lorem duis laboris cupidatat officia voluptate.
5 Culpa proident adipisicing id nulla nisi laboris ex in Lorem sunt duis officia eiusmod. Aliqua reprehenderit commodo ex non excepteur duis sunt velit enim. Voluptate laboris sint cupidatat ullamco ut ea consectetur et est culpa et culpa duis.
"

line1="$text"
line1="${line1%"$NL"*"$NL"*"$NL"*"$NL"*"$NL"*}"
line1="${line1#}"
printf '%s\n' "$line1"

echo "---"

line2="$text"
line2="${line2%"$NL"*"$NL"*"$NL"*"$NL"*}"
line2="${line2#*"$NL"}"
printf '%s\n' "$line2"

echo "---"

line3="$text"
line3="${line3%"$NL"*"$NL"*"$NL"*}"
line3="${line3#*"$NL"*"$NL"}"
printf '%s\n' "$line3"

echo "---"

line4="$text"
line4="${line4%"$NL"*"$NL"*}"
line4="${line4#*"$NL"*"$NL"*"$NL"}"
printf '%s\n' "$line4"

echo "---"

line5="$text"
line5="${line5%"$NL"*}"
line5="${line5#*"$NL"*"$NL"*"$NL"*"$NL"}"
printf '%s\n' "$line5"
```

```
1 Lorem ipsum dolor sit amet, officia excepteur ex fugiat reprehenderit enim labore culpa sint ad nisi Lorem pariatur mollit ex esse exercitation amet.
---
2 Nisi anim cupidatat excepteur officia. Reprehenderit nostrud nostrud ipsum Lorem est aliquip amet voluptate voluptate dolor minim nulla est proident.
---
3 Nostrud officia pariatur ut officia.
---
4 Sit irure elit esse ea nulla sunt ex occaecat reprehenderit commodo officia dolor Lorem duis laboris cupidatat officia voluptate.
---
5 Culpa proident adipisicing id nulla nisi laboris ex in Lorem sunt duis officia eiusmod. Aliqua reprehenderit commodo ex non excepteur duis sunt velit enim. Voluptate laboris sint cupidatat ullamco ut ea consectetur et est culpa et culpa duis.
```

Example input text:

```sh
text=\
"labore adipisicing-minim sint cillum sint cupidatat
voluptate dolor-minim nulla est proident nostrud
officia pariatur-ut officia
esse ea-nulla sunt ex occaecat reprehenderit
excepteur duis-sunt velit enim voluptate laboris"
```

Split lines in longest line width columns of count that fit the window width:

```sh
echo "$text" | column
```

```
labore adipisicing-minim sint cillum sint cupidatat     esse ea-nulla sunt ex occaecat reprehenderit
voluptate dolor-minim nulla est proident nostrud        excepteur duis-sunt velit enim voluptate laboris
officia pariatur-ut officia
```

Arrange lines in columns, input delimeted by ` `, output delimeted by `  `:

```sh
echo "$text" | column -t
```

```
labore     adipisicing-minim  sint     cillum  sint       cupidatat
voluptate  dolor-minim        nulla    est     proident   nostrud
officia    pariatur-ut        officia
esse       ea-nulla           sunt     ex      occaecat   reprehenderit
excepteur  duis-sunt          velit    enim    voluptate  laboris
```

Arrange lines in columns, input delimeted by `-`, output delimeted by `  `:

```sh
echo "$text" | column -t -s"-"
```

```
labore adipisicing  minim sint cillum sint cupidatat
voluptate dolor     minim nulla est proident nostrud
officia pariatur    ut officia
esse ea             nulla sunt ex occaecat reprehenderit
excepteur duis      sunt velit enim voluptate laboris
```

Arrange lines in columns, input delimeted by ` `, ouput delimeted by `|`:

```sh
echo "$text" | column -t -o " | "
```

```
labore    | adipisicing-minim | sint    | cillum | sint      | cupidatat
voluptate | dolor-minim       | nulla   | est    | proident  | nostrud
officia   | pariatur-ut       | officia |        |           |
esse      | ea-nulla          | sunt    | ex     | occaecat  | reprehenderit
excepteur | duis-sunt         | velit   | enim   | voluptate | laboris
```

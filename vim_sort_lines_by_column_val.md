# Sorting lines by the column values in Vim

The original text:

```
lorem;ipsum;09;dolor
sit;amet;04;qui
minim;labore;03;adipisicing
minim;sint;28;cilum
sint;consectetur;10;cupidatat
lorem;ipsum;01;dolor
```

To sort the lines by the numerical values of column 3, delimeted by character `;`:

```vim
sort f /^\v(.{-};){2}/
```

Output:

```
lorem;ipsum;01;dolor
minim;labore;03;adipisicing
sit;amet;04;qui
lorem;ipsum;09;dolor
sint;consectetur;10;cupidatat
minim;sint;28;cilum
```

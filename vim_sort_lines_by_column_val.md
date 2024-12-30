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

To sort the lines, with values delimited by character `;`, by the numerical values in column 3, in ascending order:

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

To sort the lines, with values delimited by character `;`, by the numerical values in column 3, in descending order:

```vim
sort! f /^\v(.{-};){2}/
```

minim;sint;28;cilum
sint;consectetur;10;cupidatat
lorem;ipsum;09;dolor
sit;amet;04;qui
minim;labore;03;adipisicing
lorem;ipsum;01;dolor

# Printing the directory tree using `tree`, with spaces as the indentation, instead of lines

```sh
tree | sed 's/ \|├\|─\|│\|└/ /g'
```

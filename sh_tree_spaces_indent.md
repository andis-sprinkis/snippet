# Printing the directory tree using `tree`, with spaces as the indentation, instead of lines

```sh
tree | sed 's/ \|├\|─\|│\|└/ /g'
```

The regular expression option probably doesn't work in the macOS distribution of `sed`.

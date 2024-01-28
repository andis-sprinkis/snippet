# Printing the directory tree using `tree`, with spaces as the indentation, instead of lines

```sh
\tree -F | sed 's/ \|├\|─\|│\|└/ /g'
```

Assign the result to X11 CLIPBOARD selection:

```sh
\tree -F -L 2 | sed 's/ \|├\|─\|│\|└/ /g' | xclip -selection clipboard
```

---

The regular expression option probably doesn't work in the macOS distribution of `sed`.

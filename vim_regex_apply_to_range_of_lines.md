# Applying regex to a range of lines in VIM

To replace string `hi` with `bye`, in all lines between 2 and 20 included:

```vim
2,20s/hi/bye/g
```

To replace string `hi` with `bye`, in all lines between 2 and the last line:

```vim
2,s/hi/bye/g
```

# Inserting a Shell command output in VIM buffer

To insert `ls ~/` command output lines starting one buffer line below the cursor:

```vim
r!ls ~/
```

To insert `ls ~/` command output lines on the buffer line below the cursor, replacing it's contents:

```vim
.!ls ~/
```

To insert `ls ~/` command output lines, replacing the buffer the range of lines 2 to 3:

```vim
2,3!ls ~/
```

To insert `ls ~/` command output lines, replacing the buffer the range of lines 2 to the end of the file:

```vim
2,$!ls ~/
```

To insert `ls ~/` command output lines, replacing the buffer the entire file:

```vim
%!ls ~/
```

To insert `ls ~/` command output lines, replacing the selection range of lines:

```vim
'<,'>!ls ~/
```

# Resources

The VIM help pages:

-   `:help :r!`
-   `:help :.`

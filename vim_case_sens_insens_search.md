# Switching between case sensitive and case insentivive search and substitutions in VIM

Case insensitive search and substitutions global option toggle:

```vim
set ic
" or
set ignorecase
```

Case sensitive search and substitutions global option toggle:

```vim
set noic
" or
set noignorecase
```

The case insensitive prefix `\c` in forward search:

```vim
/\csearch term
```

The case insensitive prefix `\c` in backward search:

```vim
?\csearch term
```

The case insensitive prefix `\c` in a regular expression:

```vim
:%s/\csearch term/substitution/g
```

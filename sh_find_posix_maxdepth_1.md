# Keeping the search depth level to 1 in POSIX `find`

```sh
find "./site" ! -path "./site" -prune -type f -name '_*'
```

```sh
find "./site/documents" ! -path "./site/documents" -prune -type d
```

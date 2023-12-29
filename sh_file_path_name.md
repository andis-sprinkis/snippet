# Getting file name and path values

Get file full path:

```sh
readlink -f "$file_path"
```

Get file name:

```sh
basename "$(readlink -f "$file_path")"
```

Get file directory path:

```sh
dirname "$(readlink -f "$file_path")"
```

# Getting file name and path values

Get the file absolute path:

```sh
readlink -f "$file_path"
```

Get the file name:

```sh
basename "$(readlink -f "$file_path")"
```

Get the file absolute directory path:

```sh
dirname "$(readlink -f "$file_path")"
```

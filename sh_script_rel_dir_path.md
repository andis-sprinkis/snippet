# Assigning a directory path relative to the shell script

```sh
dir="$(cd -P -- "$(dirname -- "$0")" && pwd -P)"
```

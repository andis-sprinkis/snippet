# Exiting a shell script on error or referencing an undefined variable

```sh
#!/usr/bin/env sh
set -eu
```

`-e` stands for exiting on error.

`-u` stands for exiting on referencing an undefined variable.

Temporarily unset and set back the `-e` option:

```sh
set +e
command_that_may_exit_with_err_code
set -e
```

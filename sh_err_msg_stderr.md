# Printing the shell script error message to the `stderr` file

This script redirects `stdout` output from `echo` to the file descriptor for `stderr` - `&2`, and exits with the error code `1`:

```sh
echo "$(basename $0): something went wrong" 1>&2
exit 1
```

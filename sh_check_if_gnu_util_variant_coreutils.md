# Checking if a Shell utility is the GNU variant

Check if the `grep` utility is a GNU project variant and set it to the non-POSIX color output if so:

```sh
if grep --version 2> "/dev/null" | grep -q "GNU"; then
  echo "one two" | grep --color=always "two"
else
  echo "one two" | grep "two"
fi
```

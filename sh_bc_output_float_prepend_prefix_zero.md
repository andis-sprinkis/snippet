# Prepending `0` to `bc` floating point output

```sh
echo "scale = 20; 0.5 / 2" | \bc | sed -e 's/^-\./-0./g' -e 's/^\./0./g'
```

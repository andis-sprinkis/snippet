# Floating point number calculations using `awk` and `bc`

Using `awk`:

```sh
awk 'BEGIN{ printf "%.20f\n", 1 / 3 }'
```

```
0.33333333333333331483
```

Using `bc`:

```sh
echo 'scale=20; 1 / 3' | bc | sed -e 's/^-\./-0./g' -e 's/^\./0./g'
```

```
0.33333333333333333333
```

`bc`, unlike `awk`, retains the right hand side decimal arbitrary precision.

# Floating point number calculations using `awk` and `bc`

Using `awk`:

```sh
awk 'BEGIN { printf "%.20f\n", 1 / 3 }'
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

`bc`, unlike `awk`, retains the right hand side decimal precision via the arbitrary-precision arithmetic means.

## The regular and conditional expressions using `bc`

From [Floating Point Math in Bash | Linux Journal](https://www.linuxjournal.com/content/floating-point-math-bash) ([archived](https://archive.is/20201104222335/https://www.linuxjournal.com/content/floating-point-math-bash)).

[The modified script](./comp). Output:

```
12.5 / 3.2 is 3.9062
100.4 / 4.2 + 3.2 * 6.5 is 44.7047
10.0 is greater than 9.3
10.0 is not less than 9.3
12.0 / 3.0 is 4.0000
12.0 * 3.0 is 36.00
0.5 / 3.0 is .1666
```

## Resources

-   [Arbitrary-precision arithmetic - Wikipedia](https://en.wikipedia.org/wiki/Arbitrary-precision_arithmetic)

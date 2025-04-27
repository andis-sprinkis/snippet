# Processing command output line by line in Shell

Example output of command `find -type f`:

```
./icc/colord/IFRA26S_2004_newsprint.icc
./icc/colord/PAL-RGB.icc
./icc/colord/sRGB.icc
./icc/colord/FOGRA30L_uncoated_yellowish.icc
```

Using `read` in a `while` loop to print only the file names:

```sh
find -type f | while read i; do
  printf "%s\n" "${i##*"/"}"
done
```

Output:

```
IFRA26S_2004_newsprint.icc
PAL-RGB.icc
sRGB.icc
FOGRA30L_uncoated_yellowish.icc
```

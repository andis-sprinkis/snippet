# Printing inverted file path in Shell

`./invert_fpath` script:

```sh
#!/usr/bin/env sh
set -euf
IFS_="$IFS"
NL="
"

if [ -z "${1:-""}" ]; then
  script="$(basename "$0")"
  echo "${script}: Requires an argument." 2>&1
  exit "1"
fi

inv=""

IFS="$NL"
for i in $(printf '%s' "$1" | sed -e 's/\//\/\n/g'); do
  IFS="$IFS_"

  case "$i" in
    "/")
      inv="\\${inv}"
    ;;
    *"/")
      inv="\\${i%%/}${inv}"
    ;;
    *)
      inv="${i}${inv}"
    ;;
  esac
done
IFS="$IFS_"

printf '%s\n' "$inv"
```

```sh
./invert_fpath "."
./invert_fpath ".."
./invert_fpath "/"
./invert_fpath "//"
./invert_fpath "///"
./invert_fpath "/."
./invert_fpath "./"
./invert_fpath "../"
./invert_fpath "/.."
./invert_fpath "./.."
./invert_fpath "../.."
./invert_fpath "bar"
./invert_fpath "/bar"
./invert_fpath "/foo/bar"
./invert_fpath "./bar"
./invert_fpath "foo/////bar"
./invert_fpath "../../foo/..//bar/baz/../"
./invert_fpath "/run/credentials/getty@tty1.service"
```

Output:

```
.
..
\
\\
\\\
.\
\.
\..
..\
..\.
..\..
bar
bar\
bar\foo\
bar\.
bar\\\\\foo
\..\baz\bar\\..\foo\..\..
getty@tty1.service\credentials\run\
```

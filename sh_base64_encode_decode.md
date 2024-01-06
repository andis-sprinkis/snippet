# Encode and decode data as base64

Encode stdout of echo as base64, write to stdout:

```sh
echo "hello world" | base64
```

Encode stdout of echo as base64, write to stdout, no column wrapping:

```sh
echo "hello world" | base64 --wrap=0
```

Encode `/src.txt` contents as base64, write to stdout:

```sh
base64 /src.txt
```

Decode stdout of echo, write to stdout:

```sh
echo "aGVsbG8gd29ybGQK" | base64 --decode
```

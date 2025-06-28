# Removing image metadata using `exiv2`

Removing image metadata in place from file `./image.jpg` using `exiv2`:

```sh
exiv2 rm "./image.jpg"
```

Removing image metadata from file `./image.jpg` using `exiftool`:

```sh
exiftool -all:all= "./image.jpg"
```

Removing image metadata in place from file `./image.jpg` using `exiftool`:

```sh
exiftool -overwrite_original -all:all= "./image.jpg"
```

Removing image metadata from all JPEG files in the current directory recursively using `exiftool`:

```sh
exiftool -all:all= -r -ext "JPG" -ext "JPEG" "./"
```

The `-ext` option is case-insensitive.

## Resources

-   [The `exiv2` manpage](https://github.com/Exiv2/exiv2/blob/main/exiv2.md)

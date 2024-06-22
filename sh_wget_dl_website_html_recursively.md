# Downloading all the linked HTML website documents recursively using `wget`

```sh
wget \
    -E \
    -k \
    -m \
    -np \
    -p \
    -r \
    -l "5" \
    -w "1" \
    "example.com"
```

The options explained (from the `wget(1)` manpage):

| Option                        | Explanation                                                                                                                                                                                                      |
| ----------------------------: | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `-E` `--adjust-extension`     | If a file of type application/xhtml+xml or text/html is downloaded and the URL does not end with the regexp `\.[Hh][Tt][Mm][Ll]?`, this option will cause the suffix .html to be appended to the local filename. |
| `-k` `--convert-links`        | After the download is complete, convert the links in the document to make them suitable for local viewing.                                                                                                       |
| `-m` `--mirror`               | This option turns on recursion and time-stamping, sets infinite recursion depth and keeps FTP directory listings. It is currently equivalent to -r -N -l inf --no-remove-listing.                                |
| `-np` `--no-parent`           | Do not ever ascend to the parent directory when retrieving recursively.                                                                                                                                          |
| `-p` `--page-requisites`      | This option causes Wget to download all the files that are necessary to properly display a given HTML page. This includes such things as inlined images, sounds, and referenced stylesheets.                     |
| `-r` `--recursive`            | Turn on recursive retrieving. The default maximum depth is 5.                                                                                                                                                    |
| `-l depth` `--level=depth`    | Set the maximum number of subdirectories that Wget will recurse into to depth.                                                                                                                                   |
| `-w seconds` `--wait=seconds` | Wait the specified number of seconds between the retrievals.                                                                                                                                                     |

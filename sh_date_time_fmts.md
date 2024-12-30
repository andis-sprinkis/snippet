# Printing the system date in various formats

Prints the system date and time in the ISO8601 format:

```sh
date -u "+%Y-%m-%dT%H:%M:%SZ"
```

```
2024-07-27T23:39:45Z
```

Prints the system date and time in the UNIX timestamp format:

```sh
date "+%s"
```

```
1722123585
```

Concerts a string from the UNIX timestamp format to the ISO8601 format:

```sh
date "+%Y-%m-%dT%H:%M:%SZ" -d "@1722123585"
```

```
2024-07-28T02:39:45Z
```

Concerts a string from the ISO8601 format to the UNIX timestamp format:

```sh
date -d '2024-07-27T23:39:45Z' "+%s"
```

```
1722123585
```

## Resources

-   [ISO 8601 - Wikipedia](https://en.wikipedia.org/wiki/ISO_8601)
-   [Unix time - Wikipedia](https://en.wikipedia.org/wiki/Unix_time)

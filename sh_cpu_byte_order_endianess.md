# Determining the byte order (endianess) of the host system's CPU architecture

Using `od` and `awk`:

```sh
echo "I" | od -to2 | awk '{ print substr($2,6,1); exit }'
```

Output:

- Big Endian:
  ```
  0
  ```
- Little Endian:
  ```
  1
  ```

Using `lscpu`:

```sh
lscpu | grep "Byte Order"
```

```
Byte Order:                           Little Endian
```

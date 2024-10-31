# Generating a binary dummy file

Generate a 48 bytes long file `./file.bin` of pseudo-random data:

```sh
dd if=/dev/random iflag=fullblock bs=48 count=1 > "./file.bin"
```

```
00000000  95 cf 4f f4 23 c3 a3 dd  d3 07 c7 83 a6 a2 35 d4  |..O.#.........5.|
00000010  83 ed 7f 60 f3 c9 bf 6e  2f 7f ef 69 02 cd c4 a6  |...`...n/..i....|
00000020  a7 11 68 8d 79 88 7f cc  a2 cd 72 e1 3d 3a fb 4e  |..h.y.....r.=:.N|
00000030
```

Generate a 48 bytes long file `./file.bin` of binary zero:

```sh
dd if=/dev/zero iflag=fullblock bs=48 count=1 > "./file.bin"
```

```
00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
00000030
```

Generate a 3 bytes long file `./file.bin` of bytes `66`, `6f`, `6f`:

```sh
printf "%b" '\x66\x6f\x6f' > "./file.bin"
```

```
00000000  66 6f 6f                                          |foo|
00000003
```

Generate an empty file:

```sh
touch ./example
# or
:> ./example
```

---

Print the hexdump of file `./file.bin`:

```sh
env hexdump --canonical "./file.bin"
```

Print the size of file `./file.bin` in bytes:

```sh
stat --format="%s" "./file.bin"
```

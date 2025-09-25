# Listing `man`, `info`, `tldr` pages

```sh
man -k ''
```

```sh
man -k "^ls"
```

```sh
man -k '' | grep '(2)'
```

Listing the `man` section names:

```sh
man -k '' | cut -d" " -f2 | sort -n | uniq -c | sort -n -r
```

Output:

```
  13979 (3)
   6141 (3ssl)
   2351 (1)
   1063 (8)
    913 (3x)
    882 (3p)
    706 (3perl)
    510 (2)
    497 (5)
    466 (7)
    340 (3pm)
    293 (n)
...
```

The section descriptions from the GNU `man` 2.13.1 2025-05-02 manpage:

```
       1   Executable programs or shell commands
       2   System calls (functions provided by the kernel)
       3   Library calls (functions within program libraries)
       4   Special files (usually found in /dev)
       5   File formats and conventions, e.g. /etc/passwd
       6   Games
       7   Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7), man-pages(7)
       8   System administration commands (usually only for root)
       9   Kernel routines [Non standard]
```

From the GNU `/etc/man_db.conf`:

```conf
# Section names. Manual sections will be searched in the order listed here;
# the default is 1, n, l, 8, 3, 0, 2, 3type, 5, 4, 9, 6, 7. Multiple SECTION
# directives may be given for clarity, and will be concatenated together in
# the expected way.
# If a particular extension is not in this list (say, 1mh), it will be
# displayed with the rest of the section it belongs to. The effect of this
# is that you only need to explicitly list extensions if you want to force a
# particular order. Sections with extensions should usually be adjacent to
# their main section (e.g. "1 1mh 8 ...").
#
SECTION		1 1p n l 8 3 3p 0 0p 2 3type 5 4 9 6 7
```

The section descriptions from the macOS 15.6 January 9, 2021 [MAN(1)](https://manp.gs/mac/1/man):

```
The sections of the manual are:

    1. General Commands Manual
    2. System Calls Manual
    3. Library Functions Manual
    4. Kernel Interfaces Manual
    5. File Formats Manual
    6. Games Manual
    7. Miscellaneous Information Manual
    8. System Manager's Manual
    9. Kernel Developer's Manual
```

---

```sh
info -k ''
info -k "^ls"
```

---

```sh
tldr -l
tldr -l | grep "^ls"
```

# Instructing shell runtime commands to use the POSIX locale

```sh
export LC_ALL="C"
# or
export LC_ALL="POSIX"
```

With the variable `LC_ALL` set to value `C`, the succesive shell commands should prioritise POSIX locale configuration over the set values of the locale environment variables `LC_*`, `LANG`, `LANGUAGE`.

Running `date` command with the POSIX locale:

```sh
LC_ALL="C" date
```

## Resources

-   [Locale (OpenGroup)](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap07.html#tag_07_02)
-   [Standard Locales (The GNU C Library)](https://www.gnu.org/software/libc/manual/html_node/Standard-Locales.html)

# Instructing shell runtime commands to use the POSIX locale

```sh
export LC_ALL="C"
```

With the variable `LC_ALL` set to value `C`, the succesive shell commands should prioritise POSIX locale configuration over the set values of the locale environment variables `LC_*`, `LANG`, `LANGUAGE`.

Running `date` command with the POSIX locale:

```sh
LC_ALL="C" date
```

# Fixing the user GnuPG (GPG) directory file system permissions

```sh
find "${HOME}/.gnupg" -type f -exec chmod 600 {} \;
find "${HOME}/.gnupg" -type d -exec chmod 700 {} \;
```

# Linux and Unix user account username format

According to the [User/Group Name Syntax](https://systemd.io/USER_NAMES/) article published by the systemd project ([archived](https://archive.is/O2q8G)), the user account username format in operating systems compatible with systemd should match this regular expression:

```regex
^[a-z][a-z0-9-]{0,30}$
```

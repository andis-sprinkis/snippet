# Checking the approximate upload speed of an SSH connection

```sh
dd if=/dev/zero bs=1M count=1000 status=progress | ssh usr0@host.alias 'dd of=/dev/null'
```

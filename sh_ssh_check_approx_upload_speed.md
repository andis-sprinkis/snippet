# Checking the approximate upload speed of an SSH connection

```sh
dd if=/dev/zero bs=1M count=1000 status=progress | ssh usr0@host.alias 'dd of=/dev/null'
```

Output:

```
15+0 records in
14+0 records out
14680064 bytes (15 MB, 14 MiB) copied, 40,691 s, 361 kB/s
```

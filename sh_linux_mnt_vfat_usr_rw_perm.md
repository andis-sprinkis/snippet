# Mount a VFAT volume with user file read and write permissions

Mount volume with read and write permissions according to user ID `1000` and group ID `1000`:

```sh
sudo mount -t vfat "/dev/sdb1" "/mnt/usb1" -o "rw,uid=1000,gid=1000"
```

Mount volume with read and write permissions according to the shell user and group identifiers:

```sh
sudo mount -t vfat "/dev/sdb1" "/mnt/usb1" -o "rw,uid=${UID},gid=${GID}"
```

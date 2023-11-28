# Mount a VFAT volume with user file read and write permissions

```sh
sudo mount -t vfat "/dev/sdb1" "/mnt/usb1" -o "rw,uid=1000,gid=1000"
```

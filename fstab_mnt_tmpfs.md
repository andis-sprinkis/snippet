# Mounting a tmpfs volume using `/etc/fstab`

1. Add to file `/etc/fstab`:
    ```fstab
    tmpfs /mnt/tmpfs1 tmpfs rw,size=8G,nr_inodes=5k,noexec,nodev,nosuid,uid=1000,gid=1000,mode=1700 0 0
    ```
2. ```sh
   sudo mount -a
   ```

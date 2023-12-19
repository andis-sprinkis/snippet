# Setting VFAT volume labels in Linux

Label an existing volume:

```sh
fatlabel "/dev/sdX" "MY_DEVICE"
```

Format the device and initialize a new, labeled volume:

```sh
sudo dd status="progress" if="/dev/zero" of="/dev/sdX" bs="4k"
sync
sudo mkfs.vfat -n "MY_DEVICE" "/dev/sdX1"
```

Print the block devices by the `blkid` volume label, UUID and name:
```sh
lsblk -l --output "LABEL,UUID,NAME"
```

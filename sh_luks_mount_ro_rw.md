# Temporarily mounting an encrypted LVM-on-LUKS drive partition via `cryptsetup`

```sh
sudo cryptsetup open --type luks -r /dev/sda1 usb1
```

```sh
sudo cryptsetup open --type luks /dev/sda1 usb1
```

```sh
sudo cryptsetup -v status usb1
```

```sh
lsblk /dev/sda1
```

```sh
sudo mount -r /dev/mapper/sata_luks_data /mnt/usb1
```

```sh
sudo mount -rw /dev/mapper/sata_luks_data /mnt/usb1
# or
sudo mount /dev/mapper/sata_luks_data /mnt/usb1
```

```sh
sudo cryptsetup close usb1
```

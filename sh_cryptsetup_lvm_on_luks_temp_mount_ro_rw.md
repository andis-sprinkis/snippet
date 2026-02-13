# Temporarily mounting an encrypted LVM-on-LUKS drive partition via `cryptsetup`

The example device layout after decryption and mounting:

-   `sda` - Disk device
    -   `sda1` - Disk partition - The LUKS container device
        -   `usb1` - The unlocked LUKS container mapping
            -   `sata_luks-data` - The `data` partition in LVM group `sata_luks`, mounted on `/dev/usb1`

Decrypt `sda1` LUKS container and map it to device name `usb1`:

-   Device-attributes read-only mapping:

    ```sh
    sudo cryptsetup open --type luks -r /dev/sda1 usb1
    ```

-   Device-attributes read-write mapping:

    ```sh
    sudo cryptsetup open --type luks /dev/sda1 usb1
    ```

Show status for mapping `usb1`

```sh
sudo cryptsetup -v status usb1
```

List mappings and block deices:

```sh
ls /dev/mapper
lsblk /dev/sda1
lsblk
```

If the `sda1 > usb1 > sata_luks-data` LVM partition is not visible then:

1. Rescan the volume groups and recreate LVM special files in `/dev`

    ```sh
    sudo vgscan --mknodes -v
    ```

1. Set logical volume(s) to active

    ```sh
    sudo vgchange -a y
    # or
    sudo vgchange -a y sata_luks
    ```

Mount the `sata_luks-data` LVM partition to directory `/mnt/usb1`:

-   Data read-only:

    ```sh
    sudo mount -o ro /dev/mapper/sata_luks-data /mnt/usb1
    ```

-   Data read-write:

    ```sh
    sudo mount -o rw /dev/mapper/sata_luks-data /mnt/usb1
    # or
    sudo mount /dev/mapper/sata_luks-data /mnt/usb1
    ```

---

Close and unmount the encrypted volume:

```sh
sudo cryptsetup close sata_luks-data
sudo cryptsetup close usb1
sudo umount /mnt/usb1
```

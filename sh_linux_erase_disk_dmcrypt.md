# Using `dm-crypt` for *securely* erasing a storage device

```sh
device=/dev/nvme0n1
cryptsetup open --type plain -d /dev/urandom $device to_be_wiped
dd if=/dev/zero of=/dev/mapper/to_be_wiped bs=1M status=progress
cryptsetup close to_be_wiped
```

For erasing the entire device, assign `$device` to the `/dev` device mapping e.g. `/dev/nvme0n1`.

For erasing only a partition, assign `$device` to the `/dev` partition mapping e.g. `/dev/nvme0n1p1`.

## Sources

- [dm-crypt/Drive preparation - ArchWiki](https://wiki.archlinux.org/title/Dm-crypt/Drive_preparation#dm-crypt_wipe_on_an_empty_disk_or_partition) 

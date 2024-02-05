# Cloning and writing to storage devices with dd

Write a storage device `/dev/sdc` to a storage device `/dev/sdd`:

```sh
dd if="/dev/sdc" of="/dev/sdd"
```

Write a storage device `/dev/sdc` to a storage device `/dev/sdd`, show progress, for the `dd` operation speed - increased single read and write block size to `1M`:

```sh
dd if="/dev/sdc" of="/dev/sdd" status="progress" bs="1M"
```

Write a storage device `/dev/sdc` to a file `/backup.img`:

```sh
dd if="/dev/sdc" of="/backup.img"
```

--- 

If possible, do not use `conv="noerror,sync"` for preserving data from bad disks - [it is unreliable](https://superuser.com/a/1075837) (often produces wrong null offsets, and different implementations of `dd` produce different results).

Use purpose-made tools, like `ddrescure` instead.

If those tools are not available, the `iflag=fullblock` available in GNU Coreutils `dd` implementation [may be used](https://www.gnu.org/software/coreutils/manual/html_node/dd-invocation.html):

```sh
dd conv="noerror,sync" iflag="fullblock" < "/dev/sda1" > "/mnt/rescue.img"
```

---

Write a partition `/dev/sdc1` to a file `/backup.img`:

```sh
dd if="/dev/sdc" of="/backup.img"
```

Write a file `/backup.img` to a storage device `/dev/sdc`:

```sh
dd if="/backup.img" of="/dec/sdc"
```

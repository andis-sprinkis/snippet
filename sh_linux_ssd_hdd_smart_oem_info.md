# Viewing storage device S.M.A.R.T. and OEM information on Linux

Scan for storage devices:

```sh
sudo smartctl --scan
```

View device information by the `/dev/` mapping:

```sh
sudo smartctl -x /dev/sda | $PAGER
```

Filter device IDs from `/dev/disk/` by a `/dev/` mapping:

```sh
for l in $(find "/dev/disk/by-id/" -maxdepth "1" -type "l"); do
    echo "$(basename "/dev/disk/by-id/$(readlink -s $l)")" "$(basename $l)"
done | \grep '^nvme.*\|^sd.*' | sort | column -t -o" | " | $PAGER
```

Display devices, their information, including the `/dev/disk/` ID links:

```sh
lsblk --tree -o "MODEL,SERIAL,NAME,ID-LINK,SIZE,PATH,MOUNTPOINT" | $PAGER --header=1,0,0
```

View device information by the `/dev/disk/` device ID link:

```sh
sudo smartctl -x /dev/disk/by-id/DEVICE_NAME | $PAGER
```

View device information by the `/dev/disk/` device ID link, by selecting it from lsblk output using fzf:

```sh
sudo smartctl -x "/dev/disk/by-id/$(lsblk --tree -o "ID-LINK,MODEL,SERIAL,NAME,SIZE,PATH,MOUNTPOINT" | fzf --preview="" | cut -d" " -f1)" | $PAGER
```

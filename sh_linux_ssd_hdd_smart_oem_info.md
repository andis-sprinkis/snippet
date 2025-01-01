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

View device information by the `/dev/disk/` device ID link:

```sh
sudo smartctl -x /dev/disk/by-id/DEVICE_NAME | $PAGER
```

TODO: correlate device ID by lsblk instead e.g.

```sh
lsblk --list-columns
lsblk --tree -o "MODEL,SERIAL,NAME,ID-LINK,SIZE,PATH,MOUNTPOINT" | $PAGER
```

TODO: `dmenu`/`wmenu`/`fzf` script

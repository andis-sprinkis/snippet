# Send `notify-send` notification to a specific user

```sh
usr="usr0"
sudo -u "$usr" DBUS_SESSION_BUS_ADDRESS="unix:path=/run/user/$(id -u "$usr")/bus" notify-send "test"
```

---

`/usr/local/bin/notify-send-user`:

```sh
#!/usr/bin/env sh
set -eu

usr="$1"
id="$(id -u "$usr")"
shift
sudo -u "$usr" DBUS_SESSION_BUS_ADDRESS="unix:path=/run/user/${id}/bus" notify-send "$@"
```

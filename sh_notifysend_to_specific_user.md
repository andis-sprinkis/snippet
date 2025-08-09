# Send `notify-send` notification to a specific user

```sh
usr="usr0"
sudo -u "$usr" DBUS_SESSION_BUS_ADDRESS="unix:path=/run/user/$(id -u "$usr")/bus" notify-send "test"
```

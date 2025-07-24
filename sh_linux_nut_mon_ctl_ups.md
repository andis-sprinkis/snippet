# Monitoring and controlling UPS devices with *Network UPS Tools (NUT)*

To view the currently detected UPS devices:

```sh
upsc -L
```

To print the name of the first detected UPS device:

```sh
upsc -L | head | cut -d":" -f1
```

To view device details of a connected device:

```sh
upsc "$ups_device" | $PAGER

upsc "$(upsc -L | head | cut -d":" -f1)" | $PAGER
```

To view a single variable:

```sh
upsc "$ups_device" "$ups_var_name"

upsc "$(upsc -L | head | cut -d":" -f1)" "$ups_var_name"

upsc "$(upsc -L | head | cut -d":" -f1)" "battery.charge"
```

To watch periodic change in a single variable:

```sh
watch -n "5" "upsc ${ups_device} battery.charge"

watch -n "5" "upsc $(upsc -L | head | cut -d":" -f1) battery.charge"
```

To list the available UPS device commands:

```sh
upscmd -l "$ups_device"

upscmd -l "$(upsc -L | head | cut -d":" -f1)"
```

To issue a command to a UPS device:

```sh
upscmd "$ups_device" "beeper.toggle"

upscmd "$(upsc -L | head | cut -d":" -f1)" "beeper.toggle"
```

To view the UPS devices configured to be monitored by the system directly, see `/etc/nut/ups.conf`.
```sh
cat "/etc/nut/ups.conf" | $PAGER
```

To view the configured UPS `upsd` users, see `/etc/nut/upsd.users`.

```sh
sudo cat "/etc/nut/upsd.users" | $PAGER
```

To view list of the UPS devices with events handled by `upsmon`, see `/etc/nut/upsmon.conf`.

```sh
sudo cat "/etc/nut/upsmon.conf" | grep '^MONITOR' | $PAGER
```

To view the `nut-monitor` service status:

```sh
systemctl status nut-monitor
```

To view the `nut-monitor` logs:

```sh
journalctl -u nut-monitor
```

## Resources

-   [Network UPS Tools - ArchWiki](https://wiki.archlinux.org/title/Network_UPS_Tools)
-   [Network UPS Tools - Hardware compatibility list](https://networkupstools.org/stable-hcl.html)

# Monitoring and controlling UPS devices with *Network UPS Tools*

To view the currently detected UPS devices:

```sh
upsc -L
```

To view device details of a connected device:

```sh
upsc $ups_device | $PAGER
```

To view a single variable:

```sh
upsc $ups_device $ups_var_name
```

To watch periodic change in a single variable:

```sh
watch "upsc ${ups_device} battery.charge"
```

To list the available UPS device commands:

```sh
upscmd -l $ups_device
```

To issue a command to a UPS device:

```sh
upscmd -l $ups_device beeper.toggle
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

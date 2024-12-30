# Setting per-monitor gamma level in Wayland

Setting different gamma values on monitors eDP-1 and eDP-2 using [`wlsunset`](https://github.com/kennylevinsen/wlsunset):

```sh
wlsunset -g "1.37" -t "6500" -T "6501" -o "eDP-1" &
wlsunset -g "1.12" -t "6500" -T "6501" -o "eDP-2" &
```

For Sway window manager create file `/etc/sway/config.d/20-outputs.conf` with the ccontents:

```swayconfig
# vi: ft=swayconfig
exec_always pidof wlsunset || wlsunset -g "1.37" -t "6500" -T "6501" -o "eDP-1"
```

---

⚠️ `wlsunset` only works with the Wayland compositors implementing `wlr-gamma-control-unstable-v1`.

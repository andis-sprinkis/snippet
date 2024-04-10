# Setting per-monitor gamma level in Wayland

Setting different gamma values on monitors eDP-1 and eDP-2 using [`wlsunset`](https://github.com/kennylevinsen/wlsunset):

```sh
wlsunset -g "1.37" -t "6500" -T "6501" -o "eDP-1" &
wlsunset -g "1.12" -t "6500" -T "6501" -o "eDP-2" &
```

⚠️ `wlsunset` only works with the Wayland compositors implementing `wlr-gamma-control-unstable-v1`.

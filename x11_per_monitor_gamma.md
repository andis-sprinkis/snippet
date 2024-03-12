# Setting per-monitor gamma level in X11

Setting the gamma value to `1.37` for the display with ID `eDP1`:

-   Temporarily:
    ```sh
    xrandr --output "eDP1" --gamma "1.37"
    # or
    xrandr --output "eDP1" --gamma "1.37:1.37:1.37"
    ```
-   Persistently:
    1. Create file `/etc/X11/xorg.conf.d/30-monitor.conf`:
        ```xf86config
        Section "Monitor"
          Identifier "eDP1"
          Gamma 1.37
        EndSection
        ```
    2. Restart the X11 session:

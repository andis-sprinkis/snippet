# Font resolution in X11 – the `Xft/DPI` value

## Usage example

Setting the 96 DPI font resolution in:

-   `.Xresources`:
    ```xdefaults
    Xft.dpi: 96
    ```
-   `xsettingsd.conf`:
    ```conf
    Xft/DPI 98304
    ```

    (96 * 1024)

## Common resolution values

| Scaling % | DPI (`.Xresources`) | 1024 \* DPI (`xsettingsd.conf`) |
| --------- | ------------------: | ------------------------------: |
| 100.0     | 96                  | 98304                           |
| 112.5     | 108                 | 110592                          |
| 125.0     | 120                 | 122880                          |
| 137.5     | 132                 | 135168                          |
| 150.0     | 144                 | 147456                          |
| 162.5     | 156                 | 159744                          |
| 175.0     | 168                 | 172032                          |
| 187.5     | 180                 | 184320                          |
| 200.0     | 192                 | 196608                          |

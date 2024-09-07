# Generating a solid color PNG image using ImageMagick

Using the hexacdecimal color notation:

```sh
magick -size "1600x400" "xc:#000000" "./header.png"
```

Using the hexacdecimal-alpha color notation, with 50% transparency:

```sh
magick -size "1600x400" "xc:#0000007f" "./header.png"
```

Using the RGB color notation:

```sh
magick -size "1600x400" "xc:rgb(0,0,0)" "./header.png"
```

Using the RGBA color notation, with 50% transparency:

```sh
magick -size "1600x400" "xc:rgba(0,0,0,0.5)" "./header.png"
```

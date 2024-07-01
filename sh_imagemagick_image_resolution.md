# Identifying the image file resolution using ImageMagick

```sh
identify -ping -format '%wx%h\n' "./image.png"
```

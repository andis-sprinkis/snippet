# Removing image metadata using ImageMagick

From image file `./input.jpg` creating file `./output.jpg` with the metadata removed:

```sh
convert "./input.jpg" -strip "./output.jpg"
```

⚠️ This also re-encodes the image, so it is generally practical mainly when applying other ImageMagick operations as well. To only strip the metadata, `exiv2` is an option.

Generate *The Common Desktop Environment (CDE)* style vertical gradient dither background:

```sh
resolution="1920x1080"
color_0="#56b6c2"
color_1="#608b4e"
color_2="#1e1e1e"
filename="background.png"

magick \
  -size "$resolution" \
  "gradient:#000000-#ffffff-#ffffff" \
  -ordered-dither "o8x8,3" \
  -fuzz "0%" -fill "$color_0" -opaque "#000000" \
  -fuzz "15%" -fill "$color_1" -opaque "#888888" \
  -fuzz "0%" -fill "$color_2" -opaque "#ffffff" \
  png:- > "$filename"
```

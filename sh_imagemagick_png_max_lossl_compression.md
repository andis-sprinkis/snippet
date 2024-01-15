# The lowest file size PNG image file losless compression with Imagemagick

```sh
convert source.png -depth 24 -define png:compression-filter=2 -define png:compression-level=9 -define png:compression-strategy=1 out.png
```

According to [ImageMagick: Lossless max compression for PNG? - Stack Overflow](https://stackoverflow.com/questions/27267073/imagemagick-lossless-max-compression-for-png) post by user Mark Setchell ([archived](https://archive.ph/ztLu8)).

Compression levels test script (from the above StackOverflow answer):

```sh
#!/bin/bash
convert -depth 24 -size 200x200 xc:red gradient:black-white \( xc:white +noise random \) +append reference.png
convert reference.png reference.ppm
for f in {0..5}; do
   for l in {0..9}; do
      for s in {0..4}; do
         outfile="out_${f}_${l}_${s}.png"
         convert reference.png -define png:compression-filter=$f -define png:compression-level=$l -define png:compression-strategy=$s "$outfile"
         size=$(OSXFileSize "$outfile")
         echo filter:$f, level:$l, strategy:$s, size:$size
         convert "$outfile" "$outfile.ppm"
         diff "$outfile.ppm" reference.ppm
      done
   done
done
```

The original answers from StackOverflow are licensed under the [CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/4.0/) license.

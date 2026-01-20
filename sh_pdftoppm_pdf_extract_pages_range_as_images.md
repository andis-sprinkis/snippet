# Extracting pages from a PDF document as PNG images using pdftoppm

Extract pages 5 to 10 as PNG images:

```sh
pdftoppm -png -f "5" -l "10" "./document.pdf" "documentimg"
```

Output file names:

```
documentimg-5.png
documentimg-6.png
documentimg-7.png
documentimg-8.png
documentimg-9.png
documentimg-10.png
```

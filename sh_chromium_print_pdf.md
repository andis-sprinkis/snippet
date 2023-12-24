# Print an HTML document as a PDF file using Chromium

```sh
chromium --headless --disable-gpu --run-all-compositor-stages-before-draw --no-pdf-header-footer --virtual-time-budget=5000 --print-to-pdf="output.pdf" "https://example.com"
```

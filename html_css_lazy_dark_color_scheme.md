# A lazy way of setting dark color scheme in CSS

```css
@media (prefers-color-scheme: dark) {
    html,
    img,
    video,
    iframe,
    object {
        filter: invert();
    }
}
```

Some techniques of salvaging the display of images through use of more specific selectors and styles:

-   ```css
    img:not([src*="/math/"]) {
        filter: invert();
    }
    ```
-   ```css
    img {
        background-color: white;
    }
    ```
-   ```css
    img[src*="/upload.wikimedia.org/"] {
        background-color: white;
    }
    ```

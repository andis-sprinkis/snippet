# Storing CSS line height value in `em` units

```css
:root {
    --line-height: 1.75;
    --line-height-em: calc(var(--line-height) * 1em);
}

body {
    line-height: var(--line-height);
}
```

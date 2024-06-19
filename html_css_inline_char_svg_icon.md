# Defining an inline character SVG icon and using it as CSS pseudo-element with a correct line height

The goal of this technique is to render line-height-adjusted character icons using CSS, for benefit of sighted users, that, to avoid the screen reader user confusion, are not read out by the screen reader sofware which parses the DOM.

---

In given example, displaying an arrow character `↗` next to links that open in a new tab or window.

`styles.css`:

```css
:root: {
    --line-height: 1.75;
    --line-height-em: calc(var(--line-height) * 1em);
}

body {
    font-family: Helvetica, Arial, sans-serif;
    line-height: var(--line-height);
    color: #000;
}

a[target="_blank"]::after,
a[href^="mailto:"]::after,
a[href^="tel:"]::after {
    content: url("./icon.svg");
    display: inline-block;
    width: 1em;
    height: var(--line-height-em);
    vertical-align: middle;
    margin-left: 0.15em;
}
```

In `::after` we use a linked SVG image value of `conent`, instead of a direct character value `content: '↗'` for an accessibility reason, that is – using `content: '↗'`, the name of the character is read out by screen readers and we want to avoid that.

`icon.svg`:

```xml
<!--
Values "mix-x min-y width height" for attribute "viewBox" of element <svg> are calculated as:
-50 ceil((CSS line-height * 10) / 2) 100 (CSS line-height * 10)
-->
<svg xmlns="http://www.w3.org/2000/svg" viewBox="-50 -88 100 175">
  <style>
    .symbol {
      fill: #000;
      text-anchor: middle;
      dominant-baseline: middle;
      font-family: Helvetica, Arial, sans-serif;
    }
  </style>

  <text cx="50%" cy="50%" font-size="100" class="symbol">↗</text>
</svg>
```

Values `mix-x min-y width height` for attribute `viewBox` of element `<svg>` are calculated as:

```
-50 ceil((CSS line-height * 10) / 2) 100 (CSS line-height * 10)
```

Accordingly:

```
-50 (ceil((1.75 * 10) / 2) = 88) 100 (ceil((1.75 * 10) = 175)
```

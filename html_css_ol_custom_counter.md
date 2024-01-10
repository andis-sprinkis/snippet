# Setting custom `<ol>` `<li>` elements counter with CSS

```css
ol {
    list-style-type: none;
    padding: 0;
    position: relative;
    counter-reset: item;
}

ol > li {
    position: relative;
    padding-left: 2.5em;
}

ol > li::before {
    content: counter(item) ".";
    counter-increment: item;
    width: 2em;
    margin-right: 0.5em;
    display: inline-block;
    position: absolute;
    top: 0;
    left: 0;
    text-align: right;
}
```

## Resources

-   [Using CSS counters - CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Counter_Styles/Using_CSS_counters)

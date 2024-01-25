# Keyboard and touch accessible `<abbr />` element

```html
<style>
* {
  box-sizing: border-box;
}

abbr {
  position: relative;
  text-decoration-style: dotted;
  text-decoration-thickness: 0.05rem;
  text-underline-offset: 0.1rem;
  border-radius: 0.25rem;
  cursor: help;
}

abbr[title]:hover::after,
abbr[title]:focus::after {
  content: attr(title);
  position: absolute;
  top: 1.5rem;
  left: 0;
  width: auto;
  max-width: 100vw;
  white-space: nowrap;
  background-color: #000;
  color: #fff;
  border-radius: 0.25rem;
  border: 0.1em solid #fff;
  padding: 0.5rem;
  font-size: 1rem;
  font-weight: normal;
  font-style: normal;
  z-index: 1;
}

abbr:focus {
  outline: #00000080 solid 0.2rem;
  outline-offset: 0.2rem;
}

@media print {
  abbr {
    text-decoration: none;
  }
}
</style>

<abbr tabindex="0" title="Example of an abbreviation HTML element">abrv</abbr>
```

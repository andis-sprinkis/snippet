# Preventing custom Editorconfig values overriding the Prettier config

```js
const editorconfigDefaults = {
    endOfLine: "lf",
    useTabs: false,
    tabWidth: 2,
    printWidth: 80,
}; // Do not edit

const config = {
    ...editorconfigDefaults,
    // ...
};

export default config;
```

## Resources

[Configuration File · Prettier](https://prettier.io/docs/configuration#editorconfig)

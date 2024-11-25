# Including the email recipient's name in `mailto:` links

```html
<a href="mailto:%22Jon%20Doe%22%20%3cjon.doe@example.com%3e">Send email</a>
```

```
"Jon Doe" <jon.doe@example.com>
```

---

```html
<a href="mailto:%22Jon%20Doe%22%3cjon.doe@example.com%3e">Send email</a>
```

```
"Jon Doe"<jon.doe@example.com>
```

---

## Warning

This is a non-standard URI syntax (not valid according to the RFC6068, RFC5322), but works with the commonly used email clients.

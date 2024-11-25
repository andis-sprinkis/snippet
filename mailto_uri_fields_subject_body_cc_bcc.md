# Including the Subject, Body, CC, BCC fields in `mailto:` links

```html
<a href="mailto:AAA@AAA?subject=AAA&body=AAA&cc=AAA&bcc=AAA">Send email</a>
```

```html
<a href="mailto:jon.doe@example.com?subject=Lorem%20ipsum%20dolor%20sit%20amet&body=Qui%20minim%20labore%20adipisicing%20minim%20sint%20cillum%20sint%20consectetur%20cupidatat&cc=jane.doe@example.com&bcc=foo.bar@example.com">Send email</a>
```

TODO: investigate the proper URL encoding strategy

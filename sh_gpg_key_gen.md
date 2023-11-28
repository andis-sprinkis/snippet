To generate a GPG key:

```sh
gpg --full-generate-key
```

To view the GPG keys:

```sh
gpg --list-secret-keys --keyid-format=long
```

To export the GPG public key:

```sh
gpg --armor --export KEY_ID
```

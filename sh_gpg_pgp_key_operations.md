# PGP key operations with GPG

To generate a PGP key:

```sh
gpg --full-generate-key
```

To view the public and secret keys in the keychain:

```sh
gpg --list-keys
```

To view the private keys in the keychain, in long key ID format:

```sh
gpg --list-secret-keys --keyid-format=long
```

To export a public PGP key from the keychain to a file:

```sh
gpg --armor --export KEY_ID > key.pub
```

To export a private PGP key from the keychain to a file:

```sh
gpg --armor --export-secret-keys KEY_ID > key.asc
```

Inspect a PGP keyfile:

```sh
gpg --show-keys key.asc
```

Import a key from a local PGP keyfile in the keychain:

```sh
gpg --import key.asc
# or
gpg --import < key.asc
```

Send a key from the keychain to the default keyserver:

```sh
gpg --receive-keys KEY_ID
```

Send a key from the keychain to a custom keyserver:

```sh
gpg --keyserver pgpkeys.eu --receive-keys KEY_ID
```

Receive a key in the keychain from the default keyserver:

```sh
gpg --receive-keys KEY_ID
```

Receive a key in the keychain from a custom keyserver:

```sh
gpg --keyserver pgpkeys.eu --receive-keys KEY_ID
```

## Resources

-   [The State of the Keyservers in 2024 | blog.pgpkeys.eu](https://blog.pgpkeys.eu/state-keyservers-2024.html) ([archived](https://archive.is/UMjC3))

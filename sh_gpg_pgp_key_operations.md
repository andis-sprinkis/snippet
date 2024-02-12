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

Import a key from a local PGP keyfile in the keychain:

```sh
gpg --import key.asc
# or
gpg --import < key.asc
```

# Sending/receiveing a PGP key to/from a keyserver

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

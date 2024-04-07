# PGP key operations with GPG

Generating a PGP key:

```sh
gpg --full-generate-key
```

The revocation certificate is created and stored in `$HOME/.gnupg/openpgp-revocs.d/`.

Viewing the public and secret keys in the keychain:

```sh
gpg --list-keys
```

Viewing the private keys in the keychain, in long key ID format:

```sh
gpg --list-secret-keys --keyid-format=long
```

Exporting a public PGP key from the keychain to a file:

```sh
gpg --armor --export KEY_ID > key.pub
```

Exporting a private PGP key from the keychain to a file:

```sh
gpg --armor --export-secret-keys KEY_ID > key.asc
```

Inspecting a PGP keyfile:

```sh
gpg --show-keys key.asc
```

Importing a key from a local PGP keyfile in the keychain:

```sh
gpg --import key.asc
# or
gpg --import < key.asc
```

Sending a key from the keychain to the default keyserver:

```sh
gpg --send-keys KEY_ID
```

Sending a key from the keychain to a custom keyserver:

```sh
gpg --keyserver pgpkeys.eu --send-keys KEY_ID
```

Receiving a key in the keychain from the default keyserver:

```sh
gpg --receive-keys KEY_ID
```

Receiving a key in the keychain from a custom keyserver:

```sh
gpg --keyserver pgpkeys.eu --receive-keys KEY_ID
```

Generating a revocation certificate for a complete PGP key:

```sh
gpg --generate-revocation KEY_ID
```

> To only revoke a subkey or a key signature, use the --edit command.

Revoking a PGP key:

1. The revocation certificate files need to be prepared for their use:

    > To avoid an accidental use of this file, a colon has been inserted
    > before the 5 dashes below. Remove this colon with a text editor
    > before importing and publishing this revocation certificate.

1. ```sh
   gpg --import "$HOME/.gnupg/openpgp-revocs.d/REVOCATION_KEY.rev"
   # or
   gpg --import < "$HOME/.gnupg/openpgp-revocs.d/REVOCATION_KEY.rev"

   gpg --list-keys

   # pub   ed25519/REVOKED_KEY_ID 2024-04-07 [SC] [revoked: 2024-04-07]
   # Key fingerprint = REVOKED_KEY_FINGERPRINT
   # uid                 [ revoked] Test user (Test key) <test@example.com>

   # Sending the revoked key to the keyserver:
   gpg --send-keys REVOKED_KEY_ID
   # or
   gpg --keyserver pgpkeys.eu --send-keys REVOKED_KEY_ID

   # Exporting a revoked key to send to the immediate contacts:
   gpg --armor --export REVOKED_KEY_ID > revoked_key.pub
   ```

## Resources

-   [The State of the Keyservers in 2024 | blog.pgpkeys.eu](https://blog.pgpkeys.eu/state-keyservers-2024.html) ([archived](https://archive.is/UMjC3))

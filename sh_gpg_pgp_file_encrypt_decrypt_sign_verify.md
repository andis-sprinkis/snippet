# PGP encrypting, decrypting and signing files using GPG

Encrypt file `secret.zip` as `secret.zip.gpg` using asymmetric encryption (separate encryption and decryption keys):

```sh
gpg --recipient KEY_ID ANOTHER_KEY_ID --encrypt secret.zip
```

Decrypt file encrypted with asymmetric encryption `secret.zip.gpg` as `secret_decrypted.zip`:

```sh
gpg --decrypt secret.zip.gpg > secret_decrypted.zip
# or
gpg --decrypt secret.zip.gpg --output secret_decrypted.zip
```

Encrypt file `secret.zip` as `secret.zip.asc` using asymmetric encryption, in ASCII text format:

```sh
gpg --recipient KEY_ID ANOTHER_KEY_ID --armor --encrypt secret.zip
```

Encrypt file `secret_0.zip` as `secret_0.zip.gpg` and file `secret_1.zip` as `secret_1.zip.gpg` using asymmetric encryption:

```sh
gpg --recipient KEY_ID ANOTHER_KEY_ID --encrypt-files secret_0.zip secret_1.zip
# or
gpg --recipient KEY_ID ANOTHER_KEY_ID --encrypt --multifile secret_0.zip secret_1.zip
```

Decrypts files `secret_0.zip.gpg` as `secret_0.zip`, `secret_1.zip.gpg` as `secret_1.zip`:

```sh
gpg --decrypt-files secret_0.zip.gpg secret_1.zip.gpg
# or
gpg --multifile decrypt secret_0.zip.gpg secret_1.zip.gpg
```

Encrypt file `secret.zip` as `secret.zip.gpg` using symmetric encryption (same key - a passphrase - for encrypting and decrypting):

```sh
gpg --symmetric --cipher-algo AES256 secret.zip
```

Decrypt file encrypted with symmetric encryption `secret.zip.gpg` as `secret.zip`:

```sh
gpg --decrypt secret.zip.gpg
```

Sign file `message.zip` as `message.zip.gpg` with an embedded signature:

```sh
gpg --default-key "KEY_ID" --sign "message.zip"
```

Sign file `message.zip` as `message.zip.asc` with an embedded signature, output as ASCII text file:

```sh
gpg --armor --default-key "KEY_ID" --sign "message.zip"
```

Verify signed file `message.zip.gpg` signature information:

```sh
gpg --verify "message.zip.gpg"
```

Extract the original file `message.zip` from signed file `message.zip.gpg`:

```sh
gpg --output "message.zip" --decrypt "message.zip.gpg"
```

Sign file `message.zip` with a detached signature `message.zip.sig`:

```sh
gpg --default-key "KEY_ID" --detach-sign "message.zip.txt"
```

Verify signed file's `./message.zip` detached signature file `./message.zip.sig` information:

```sh
gpg --verify "./message.zip.sig"
```

Sign and encrypt file `message.zip` as `message.zip.gpg` with a detached signature and using asymmetric encryption:

```sh
gpg --default-key SENDER_KEY_ID --encrypt --recipient RECIPIENT_KEY_ID --sign message.zip
```

Decrypt and extract the original file `message.zip` from signed and encrypted file `message.zip.gpg`, while verifying the encrypted signature:

```sh
gpg --output "message.zip" --decrypt "message.zip.gpg"
```

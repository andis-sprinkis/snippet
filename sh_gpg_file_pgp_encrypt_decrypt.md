# PGP encrypting and decrypting files using GPG

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

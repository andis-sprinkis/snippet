## Signing Git commits with GPG

The `.gitconfig` file

```gitconfig
[user]
  email = jon.doe@example.com
  name = Jon Doe
  signingkey = KEY_ID

[commit]
  gpgsign = true

[gpg]
  program = gpg
```

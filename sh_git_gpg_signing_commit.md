# Signing Git commits with GPG

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

## Resources

-   [Generating a new GPG key - GitHub Docs](https://docs.github.com/en/authentication/managing-commit-signature-verification/generating-a-new-gpg-key)

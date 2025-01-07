# Generating an SSH key

```sh
ssh-keygen -t ed25519 -C "your_email@example.com" -f "${HOME}/.ssh/filename0"
```

This command will generate the key files `${HOME}/.ssh/filename0` and `${HOME}/.ssh/filename0.pub`.

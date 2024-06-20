# Fixing the user SSH directory file system permissions

```sh
chmod 700 "${HOME}/.ssh"
chmod 600 "${HOME}/.ssh/"*
chmod 644 -f "${HOME}/.ssh/"*".pub" "${HOME}/.ssh/authorized_keys" "${HOME}/.ssh/known_hosts"
```

# Fixing the user SSH directory file system permissions

```sh
chmod 700 "~/.ssh"
chmod 600 "~/.ssh/"*
chmod 644 -f "~/.ssh/"*".pub" "~/.ssh/authorized_keys" "~/.ssh/known_hosts"
```

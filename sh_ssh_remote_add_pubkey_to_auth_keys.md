# Add an SSH public key to `authorized_keys` file on a remote machine

Copy the given public key to the remote:
```sh
ssh-copy-id -i "./cert.pub" "username@remote_host"
```

Copy the given public key to the remote with specific port:

```sh
ssh-copy-id -i "./cert.pub" -p "6832" "username@remote_host"
```

# Mount a CIFS (SMB) volume with user file read and write permissions

Mount volume with read and write permissions according to user ID `1000` and group ID `1000`:

```sh
sudo mount -t cifs "//192.168.1.53/share" "/mnt/nas1" -o "username=remote_user,workgroup=workgroup,iocharset=utf8,uid=1000,gid=1000"
```

Mount volume with read and write permissions according to the shell user and group identifiers:

```sh
sudo mount -t cifs "//192.168.1.53/share" "/mnt/nas1" -o "username=remote_user,workgroup=workgroup,iocharset=utf8,uid=${UID},gid=${GID}"
```

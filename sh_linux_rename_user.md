# Changing username for an existing user in linux

```sh
usermod -l "new_username" -d "/home/new_username" -m "current_username"
groupmod -n "new_username" "current_username"
```

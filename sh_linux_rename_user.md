# Changing username for an existing user in linux

```sh
sudo usermod -l new_username -d /home/new_username -m current_username
sudo groupmod -n new_username current_username
```

# In shell determining which processes are using a file, directory, mount point

Print the processes that are using the file `/mnt/nas1/hello.txt`:

```sh
fuser -v /mnt/nas1/hello.txt
```

Print the processes that are using the directory `/mnt/nas1/` and kill them (default signal - `SIGKILL`):

```sh
fuser -vk /mnt/nas1/
```

Print the processes that are using the directory `/mnt/nas1/` and kill them, using HUP signal, and only if the given path is a mount point:

```sh
fuser -vkM -SIGNAL HUP /mnt/nas1/
```

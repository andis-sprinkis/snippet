# Copying files and directories locally using rsync

Copy `/src/filename.zip` to `/dest/`:

```sh
rsync /src/filename.zip /dest/
```

Copy `/src/filename.zip` to `/dest` as `/dest/newfilename.zip`:

```sh
rsync /src/filename.zip /dest/newfilename.zip
```

Copy contents of directory `/src` to directory `/dest`:

```sh
rsync /src/ /dest/
```

Copy directory `/src` to directory `/dest/src`:

```sh
rsync /src /dest/
```

Copy contents of directory `/src` to directory `/dest`, including symlinks and directories:

```sh
rsync -l –r /src/ /dest/
```

Copy contents of directory `/src` to directory `/dest` using the archive mode:

```sh
rsync -a /src/ /dest/
```

It syncs directories recursively, transfer special and block devices, preserve symbolic links, modification times, groups, ownership, and permissions.

So it is equivalent to:

```sh
rsync -rlptgoD /src/ /dest/
```

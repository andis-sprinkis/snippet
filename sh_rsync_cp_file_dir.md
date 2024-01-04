# Copying files and directories using rsync

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

So, for the above example, it is equivalent to:

```sh
rsync -rlptgoD /src/ /dest/
```

Copy contents of directory `/src` to directory `/dest`, with increased verbosity:

```sh
rsync -v /src/ /dest/
```

From the rsync manpage:

> --verbose, -v
> This option increases the amount of information you are given during the transfer. 
>
> By default, rsync works silently.
>
> A single -v will give you information about what files are being transferred and a brief summary at the end. 
>
> Two -v options will give you information on what files are being skipped and slightly more information at the end. More than two -v options should only be used if you are debugging rsync.
>
> ...
>
> In a modern rsync, **the -v option is equivalent to the setting of groups of --info and --debug options**.
>
> You can choose to use these newer options in addition to, or in place of using --verbose, as any fine-grained settings override the implied settings of -v. Both --info and --debug have a way to ask for help that tells you exactly what flags are set for each increase in verbosity.

Copy contents of directory `/src` to directory `/dest`, while the showing progress for each file:
```sh
rsync --progress /src/ /dest/
```

Copy contents of directory `/src` to directory `/dest`, while showing only the overall progress of the transfer:

```sh
rsync --info=progress2 /src/ /dest/
```

# Copying files and directories over SSH using scp

Copy `/src/filename.zip` to remote host directory `/dest`:

```sh
scp /src/filename.zip username@host:/dest/
```

Copy `/src/filename.zip` to remote host directory `/dest`, with a custom SSH port and identity private key:

```sh
scp -i ~/.ssh/host_00 -P 3932 /src/filename.zip username@host:/dest/
```

Copy `/src/filename.zip` to remote host directory `/dest` as `/dest/newfilename.zip`:

```sh
scp /src/filename.zip username@host:/dest/newfilename.zip
```

Copy `/src/filename.zip`, `/src/filename2.zip` to remote host directory `/dest`:

```sh
scp /src/filename.zip /src/filename2.zip username@host:/dest/
```

Copy directory `/src` to remote host directory `/dest/src`:

```sh
scp -r /src username@host:/dest
```

Copy directory `/src` to remote host directory `/dest/src`, while preserving modification times, access times, and file mode bits from the source files:

```sh
scp -rp /src username@host:/dest
```

Copy remote host directory `/src` to directory `/dest/src`:

```sh
scp -r user@host:/src /dest
```

Copy remote host directory `/src` to remote host directory `/dest/src`:

```sh
scp -r user@host:/src user@host2:/dest
```

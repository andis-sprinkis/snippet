# Adding and updating users and groups in Linux

Create a new user `usr0`:

```sh
sudo useradd "usr0"
```

Create a new user `usr0` and initialize the home directory `/home/usr0`:

```sh
sudo useradd --create-home "usr0"
```

Create a home directory `/home/usr0` for an existing user `usr0`:

```sh
sudo mkhomedir_helper "usr0"
```

Create a new user `usr0` with specific user ID `1500`:

```sh
sudo useradd -u "1500" "usr0"
```

Set password for `usr0`:

```sh
sudo passwd "usr0"
```

Create a new user `usr0` with group `somegroup` as the primary group and `wheel`, `docker` as secondary groups:

```sh
sudo useradd -g "somegroup" -G "wheel,docker" "usr0"
```

The primary group is used by default when creating new files (or directories), modifying files, or executing commands. The secondary (supplementary) groups are for the other file and application permissions purposes.

Change the user's `usr0` primary group to `anothergroup`:

```sh
sudo usermod -g "another-group" "usr0"
```

Create user group `hello`:

```sh
sudo groupadd "hello"
```

Delete user group `hello` and remove the user memberships:

```sh
sudo groupdel "hello"
```

Add user `usr0` to secondary group `hello`:

```sh
sudo usermod -aG "hello" "usr0"
```

Add user `usr0` to secondary groups `foo`, `bar`:

```sh
sudo usermod -aG "foo,bar" "usr0"
```

Remove `usr0` from a group `bar`:

```sh
sudo gpasswd --delete "usr0" "bar"
```

Alternatively, remove the user name from the relevant line in file `/etc/group`, e.g.:

```group
bar:x:XXX:usr0
```

to

```group
bar:x:XXX:
```

List which the current user belongs to:

```sh
groups
# or
id
```

List which groups user `usr0` belongs to:

```sh
groups "usr0"
# or
id "usr0"
```

List all groups and the users within them:

```sh
sudo cat "/etc/group" | $PAGER
```

Check `sudo` privileges for user `usr0`:

```sh
sudo -lU "usr0"
```

View and update `sudo` privileges for users and groups:

```sh
sudo visudo
```

## Relevant files

-   `/etc/group`
-   `/etc/shadow`
-   `/etc/gshadow`
-   `/etc/sudoers`

## Relevant utilities

-   `newgrp`: log into a new group
-   `sg`: execute a command as a different group ID
-   `usermod`: modify system account files
-   `groupmod`: modify a group definition (e.g., the group ID, group name, or password)
-   `gpasswd`: administer `/etc/group` and `/etc/gshadow` files (every group can have administrators, members, and a password)
-   `chown`, `chgrp`: change individual or group ownership of a file or directory
-   `visudo`: edit file `/etc/sudoers` in the visual editor with a file access lock and validate the result, to specify
    which users and groups can use the `sudo` command

## Resources

-   [User/Group Name Syntax](https://systemd.io/USER_NAMES/) ([archived](https://archive.is/O2q8G))

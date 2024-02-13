# Adding and updating users and groups in Linux

Create a new user `user-00`:

```sh
sudo useradd "user-00"
```

Create a new user `user-00` and initialize the home directory `/home/user-00`:

```sh
sudo useradd --create-home "user-00"
```

Create a home directory `/home/user-00` for an existing user `user-00`:

```sh
sudo mkhomedir_helper "user-00"
```

Create a new user `user-00` with specific user ID `1500`:

```sh
sudo useradd -u "1500" "user-00"
```

Set password for `user-00`:

```sh
sudo passwd "user-00"
```

Create a new user `user-00` with group `somegroup` as the primary group and `wheel`, `docker` as secondary groups:

```sh
sudo useradd -g "somegroup" -G "wheel,docker" "user-00"
```

The primary group is used by default when creating new files (or directories), modifying files, or executing commands. The secondary (supplementary) groups are for the other file and application permissions purposes.

Change the user's `user-00` primary group to `anothergroup`:

```sh
sudo usermod -g "another-group" "user-00"
```

Create user group `hello`:

```sh
sudo groupadd "hello"
```

Delete user group `hello` and remove the user memberships:

```sh
sudo groupdel "hello"
```

Add user `user-00` to secondary group `hello`:

```sh
sudo usermod -Ga "hello" "user-00"
```

Add user `user-00` to secondary groups `foo`, `bar`:

```sh
sudo usermod -Ga "foo,bar" "user-00"
```

Remove `user-00` from a group `bar`:

```sh
sudo gpasswd --delete "user-00" "bar"
```

Alternatively, remove the user name from the relevant line in file `/etc/group`, e.g.:

```group
bar:x:XXX:user-00
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

List which groups user `user-00` belongs to:

```sh
groups "user-00"
# or
id "user-00"
```

List all groups and the users within them:

```sh
sudo cat "/etc/group" | $PAGER
```

Check `sudo` privileges for user `user-00`:

```sh
sudo -lU "user-00"
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

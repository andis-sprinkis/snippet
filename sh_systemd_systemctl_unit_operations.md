# systemd `systemctl` unit operations

Listing all available unit files and their activity state:

```sh
systemctl list-unit-files
```

Listing the unit files that have been loaded in the memory and are active:

```sh
systemctl list-units
```

Listing the unit files that have been loaded in the memory, regarldess if active:

```sh
systemctl list-units --all
```

Listing the unit files that have been loaded in the memory and are inactive:

```sh
systemctl list-units --all --state=inactive
```

Displaying a unit file:

```sh
systemctl cat sshd
```

Displaying a unit properties:

```sh
systemctl show sshd
```

Displaying dependencies of a unit:

```sh
systemctl list-dependencies sshd
```

Starting a unit service:

```sh
systemctl start sshd
```

Stopping a unit service:

```sh
systemctl stop sshd
```

Enabling a unit:

```sh
systemctl enable sshd
```

From manpage `systemctl(1)`:

>Depending on whether --system, --user, --runtime, or --global is specified, this enables the unit for the system, for the calling user only, for only this boot of the system, or for all future logins of all users. Note that in the last case, no systemd daemon configuration is reloaded.

Enabling and starting a unit:

```sh
systemctl enable --now sshd
```

Disabling a unit:

```sh
systemctl disable sshd
```

From manpage `systemctl(1)`:

>This command honors --system, --user, --runtime, --global and --no-warn in a similar way as enable.

Masking a unit, to make it unstartable:

```sh
systemctl mask sshd
```

Unmasking a unit:

```sh
systemctl unmask sshd
```

Checking a unit status:

```sh
systemctl status sshd
```

Checking if a unit is enabled:

```sh
systemctl is-enabled sshd
```

Checking if a unit service is active (exit code `0`) or not (exit code `1`):

```sh
systemctl is-active sshd
```

Checking if a unit service is active (exit code `0`) or not (exit code `1`), with no printed output:

```sh
systemctl is-active --quiet sshd
```

Checking if a unit service has failed (exit code `0`) or not (exit code `1`):

```sh
systemctl is-failed sshd
```

Restarting a unit service:

```sh
systemctl restart sshd
```

Reloading a unit service configuration:

```sh
systemctl reload sshd
```

From manpage `systemctl(1)`:

>Note that this will reload the service-specific configuration, not the unit configuration file of systemd.

Reloading all unit files:

```sh
systemctl daemon-reload
```

From manpage `systemctl(1)`:

>This will rerun all generators (see systemd.generator(7)), reload all unit files, and recreate the entire dependency tree.

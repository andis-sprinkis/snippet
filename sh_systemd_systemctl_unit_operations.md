# systemd `systemctl` unit operations

Listing all available unit files and their activity state:

```sh
systemctl list-unit-files
```

Listing the unit files that in the current session have been loaded in the memory:

```sh
systemctl list-units
```

Starting a unit service:

```sh
systemctl start firewalld
```

Stopping a unit service:

```sh
systemctl stop firewalld
```

Enabling a unit service:

```sh
systemctl enable firewalld
```

From manpage `systemctl(1)`:

>Depending on whether --system, --user, --runtime, or --global is specified, this enables the unit for the system, for the calling user only, for only this boot of the system, or for all future logins of all users. Note that in the last case, no systemd daemon configuration is reloaded.

Enabling and starting a unit service:

```sh
systemctl enable --now firewalld
```

Disabling a unit service:

```sh
systemctl disable firewalld
```

From manpage `systemctl(1)`:

>This command honors --system, --user, --runtime, --global and --no-warn in a similar way as enable.

Checking a unit service status:

```sh
systemctl status firewalld
```

Checking if a unit is enabled:

```sh
systemctl is-enabled firewalld
```

Checking if a unit is active:

```sh
systemctl is-active firewalld
```

Checking if a unit is active, with no printed output:

```sh
systemctl is-active --quiet firewalld
```

Restarting a unit service:

```sh
systemctl restart firewalld
```

Reloading a unit service configuration:

```sh
systemctl reload firewalld
```

From manpage `systemctl(1)`:

>Note that this will reload the service-specific configuration, not the unit configuration file of systemd.

Reloading all unit files:

```sh
systemctl daemon-reload
```

From manpage `systemctl(1)`:

>This will rerun all generators (see systemd.generator(7)), reload all unit files, and recreate the entire dependency tree.

# Query and inspect local packages with pacman or yay (AUR helper)

List installed packages and versions:

```sh
pacman -Q
# or
yay -Q
```

List only the explicitly installed packages and versions:

```sh
pacman -Qe
# or
yay -Qe
```

List the installed packages that are found in the sync databases:

```sh
pacman -Qn
# or
yay -Qn
```

List the installed packages that are not found in the sync databases (typically the ones downloaded manually):

```sh
pacman -Qm
# or
yay -Qm
```

Query specific installed package by exact name and show detailed information:

```sh
pacman -Qi package_name
# or
yay -Qi package_name
```

Query specific installed package by exact name and show detailed information, if explictly installed:

```sh
pacman -Qei package_name
# or
yay -Qei package_name
```

Query specific installed package by exact name, list all it's files and check if all it's files are present on the system:

```sh
pacman -Qlk package_name
# or
yay -Qlk package_name
```
Search each locally-installed package for names or descriptions that match regexp.:

```sh
pacman -Qs package_name or description search terms
# or
yay -Qs package_name or description search terms
```

Displays information about installed packages and system health:

```sh
yay -P --stats
```

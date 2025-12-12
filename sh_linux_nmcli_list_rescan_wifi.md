# Rescanning and showing the Wi-Fi device list using the NetworkManager `nmcli`
```sh
nmcli device wifi rescan
```

```sh
nmcli device wifi rescan && nmtui connect
```

```sh
nmcli dev wifi list --rescan yes
```

```sh
nmcli --mode multiline --terse dev wifi list --rescan yes
nmcli --mode tabular --terse dev wifi list --rescan yes | fzf --no-preview
```

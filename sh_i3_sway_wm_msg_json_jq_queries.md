# i3 and Sway window manager message protocol queries in Shell using `jq`

Query the workspaces and print the corresponding output names:

```sh
$wm_cmd -t "get_workspaces" | jq -r ".[] | .output"
```

```
DP-2
DP-1
HDMI-A-1
```

Query the focused workspace and print the corresponding output name:

```sh
$wm_cmd -t "get_workspaces" | jq -r ".[] | select(.focused == true) | .output"
```

```
DP-1
```

Query the output by name `DP-2` and print it's `rect` information:

```sh
$wm_cmd -t "get_outputs" | jq -r ".[] | select(.name == \"DP-2\") | .rect"
```

```json
{
    "x": 2880,
    "y": 0,
    "width": 1440,
    "height": 2560
}
```

Generate a sorted array of the workspace numbers:

```sh
$wm_cmd -t "get_workspaces" | jq -r "[.[] | .num] | sort"
```

```json
[1, 2, 3, 9]
```

Generate a sorted array of the visible workspace numbers:

```sh
$wm_cmd -t "get_workspaces" | jq -r "map({num,visible}) | [.[] | select(.visible == true) | .num] | sort"
```

```json
[1, 2, 3]
```

Generate index object of the workspace numbers by their corresponding output names:

```sh
$wm_cmd -t "get_workspaces" | jq -r 'map({output,num}) | group_by(.output) | map({(.[].output): map(.num) }) | add'
```

```json
{
    "DP-1": [3, 9],
    "DP-2": [2],
    "HDMI-A-1": [1]
}
```

Generate index object of the visible workspaces by their corresponding output names:

```sh
$wm_cmd -t "get_workspaces" | jq -r 'map({output,num,visible}) | [.[] | select(.visible == true)] | group_by(.output) | map({(.[].output): map(.num) | add }) | add'
```

```json
{
    "DP-1": 3,
    "DP-2": 2,
    "HDMI-A-1": 1
}
```

Generate index object of the workspaces by workspace numbers they contain:

```sh
$wm_cmd -t "get_workspaces" | jq -r 'map({output,num}) | group_by(.num) | map({(.[].num | tostring): map(.output)[] }) | add'
```

```json
{
    "1": "HDMI-A-1",
    "2": "DP-2",
    "3": "DP-1",
    "9": "DP-1"
}
```

A rudamentary i3-or-Sway window manager detection:

```sh
wm="${WAYLAND_DISPLAY:+"sway"}"
wm="${wm:-"i3"}"

case "$wm" in
  "sway")
    wm_cmd="swaymsg"
  ;;
  "i3")
    wm_cmd="i3-msg"
  ;;
esac
```

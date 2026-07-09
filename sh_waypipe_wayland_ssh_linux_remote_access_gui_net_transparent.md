# Network-transparent Wayland session remote access via Waypipe

1. Set up the SSH connection to the remote computer.

1. On the client and the remote computer install `waypipe` and `xwayland-sattelite`.

    Arch Linux:

    ```sh
    sudo pacman -S "waypipe" "xwayland-sattelite"
    ```

1. From client computer launch an application that exists on the remote computer.

    ```sh
    waypipe --title-prefix "[WAYPIPE] " --no-gpu ssh "usr0@host.alias" "foot"
    ```

    For X11 applications use the `--xwls` option:

    ```sh
    waypipe --title-prefix "[WAYPIPE] " --no-gpu --xwls ssh "usr0@host.alias" "mpv"
    ```

## Resources

- `man 1 waypipe`
    - [waypipe(1) — Arch manual pages](https://man.archlinux.org/man/extra/waypipe/waypipe.1.en)
- [M. Stoeckl / Waypipe · GitLab](https://gitlab.freedesktop.org/mstoeckl/waypipe)

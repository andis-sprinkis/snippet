# Creating persistent SSH client-to-host configuration

1.  Generate the SSH key for authenticating with the host machine.

    ```sh
    ssh-keygen -t ed25519 -C "usr0@example.com" -f "~/.ssh/hostalias0"
    ```

1.  Back up the generated key files `~/.ssh/hostalias0` and `~/.ssh/hostalias.pub`.

1.  Add a host ip to a local domain alias entry to file `/etc/hosts`.

    ```conf
    128.128.128.128 host.alias
    ```

1.  Add an SSH authentication configuration entry to file `~/.ssh/config`.

    ```sshconfig
    Host host.alias
      Hostname host.alias
      IdentityFile ~/.ssh/hostalias0
      Port 22
      Preferredauthentications publickey
      User usr0
    ```

1.  Fix the local `~/.ssh` directory file permissions.

    ```sh
    chmod 700 "~/.ssh"
    chmod 600 "~/.ssh/"*
    chmod 644 -f "~/.ssh/"*".pub" "~/.ssh/authorized_keys" "~/.ssh/known_hosts"
    ```

1.  Add the authentication public key to `/home/usr0/.ssh/authorized_keys` file on the host.

    ```sh
    ssh-copy-id -i "~/ssh/hostalias0.pub" "usr0@host.alias"
    ```

    (If an existing authentication method to host machine, like the password or another SSH key is already present.)

1.  Disable the password authentication on the host machine.
    1. In file `/etc/ssh/sshd_config` set the values of the keys `PasswordAuthentication` and `PermitRootLogin`:
        ```sshdconfig
        PasswordAuthentication no
        PermitRootLogin prohibit-password
        ```
    1. Restart the SSHD service.
        ```sh
        systemctl restart sshd
        ```

## Connecting to the host

-   A console SSH session:
    ```sh
    ssh usr0@host.alias
    ```
-   An SFTP storage mount:
    ```sh
    sshfs usr0@host.alias:/home/usr0 /mnt/vps1
    ```

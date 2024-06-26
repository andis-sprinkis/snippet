# Installing the VMware Workstation on an Arch Linux host

1. Ensure that the necessary packages are installed.

    1. From Arch Linux package repository:

        ```sh
        yay linux-headers polkit-gnome
        ```

    1. From AUR:
        ```sh
        yay vmware-workstation
        ```

1. ```sh
   sudo modprobe -a vmw_vmci vmmon
   sudo systemctl start vmware-networks-configuration.service
   sudo systemctl enable --now vmware-usbarbitrator.service
   sudo systemctl enable --now vmware-networks.service
   /usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
   vmware
   pkill polkit-gnome-au
   ```

## Resources

-   [VMware - ArchWiki](https://wiki.archlinux.org/title/VMware)

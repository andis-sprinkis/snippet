# QEMU + KVM full system emulation virtual machine on Arch Linux

QEMU a machine emulator and virtualizer.

KVM is a Linux kernel virtualization feature that accelerates CPU virtualization.

QEMU provides the device emulation and virtual machine process.

KVM provides near-native CPU virtualization when supported by the host CPU.

VirtIO devices are paravirtualized devices designed for virtual machines. They usually perform better than fully emulated hardware. For Linux guests, VirtIO support is normally available out of the box in the kernel.

## Packages

- `qemu-full` - Complete QEMU installation with all architecture support and features (x86, ARM, etc.)
    - Alternatively
        - `qemu-base` - QEMU base configuration
        - `qemu-desktop` - QEMU for desktop virtualization
    - Provides
        - `qemu-system-x86_64`
        - `qemu-img`
- `libvirt` - Virtualization management layer - daemon and API – the glue that ties KVM and QEMU together
    - Provides
        - `libvirtd` - daemon
        - `virsh` - API client
- `virt-manager` is a graphical application that uses libvirt to create and manage virtual machines.
- `dnsmasq` - Lightweight DHCP and DNS server for NAT-based VM networking used by libvirt
- `edk2-ovmf` - UEFI firmware for virtual machines – required for UEFI-boot VMs and Secure Boot
- `iptables-nft` - Firewall backend that libvirt uses to set up NAT networking rules

Optionally

- `swtpm` - Software TPM 2.0 emulator – needed for Windows 11 VMs and TPM-dependent operating systems
- `virt-viewer` - Console viewer for connecting to VM displays (SPICE/VNC)

## Setup

1.  ```sh
    sudo pacman -S qemu-base qemu-desktop libvirt virt-manager edk2-ovmf dnsmasq iptables-nft
    ```

1.  ```sh
    sudo systemctl enable --now "libvirtd"
    sudo systemctl status "libvirtd"
    ```

1.  ```sh
    sudo usermod -aG "libvirt" "$(whoami)"
    ```

1.  ```sh
    reboot
    ```

1.  ```sh
    groups
    ```

1.  ```sh
    sudo virsh net-autostart "default"
    sudo virsh net-start "default"
    ```

## Changing the `default` storage pool location

1. Delete and redefine the `default` storage pool to point to an example path `/mnt/sata1/virt`:

    ```sh
    sudo virsh pool-destroy "default"
    sudo virsh pool-undefine "default"
    sudo virsh pool-define-as --name "default" --type "dir" --target "/mnt/sata1/virt"
    sudo virsh pool-start "default"
    ```

Alternatively:

1. ```sh
   sudo virsh pool-edit "default"
   ```

1. Edit the `target` `path` value.

## Resources

- [Install KVM and Virt-Manager on Arch Linux \[Guide\]](https://computingforgeeks.com/install-kvm-arch-linux/)
    - [Allow standard users to manage KVM using virsh / \[Guide\]](https://computingforgeeks.com/allow-standard-users-to-manage-kvm-using-virsh-virt-manager/)
- [Installing QEMU on Arch Linux: A Comprehensive Guide — linuxvox.com](https://linuxvox.com/blog/install-qemu-on-arch-linux/)
- [QEMU - ArchWiki](https://wiki.archlinux.org/title/QEMU)
- [libvirt - ArchWiki](https://wiki.archlinux.org/title/Libvirt)
- [KVM - ArchWiki](https://wiki.archlinux.org/title/KVM)
- [Driver installation · virtio-win/kvm-guest-drivers-windows Wiki](https://github.com/virtio-win/kvm-guest-drivers-windows/wiki/Driver-installation)
- [WINDOWS 11 VIRTUAL MACHINE SETUP (Virt-Manager + VirtIO Drivers)](https://gist.github.com/KitBaroness/e361cae0600003bfb8ecea89c56d1f2a)

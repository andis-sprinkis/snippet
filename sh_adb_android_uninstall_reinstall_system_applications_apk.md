# Uninstalling and reinstalling the Android system applications via ADB (no root)

1. Enable Android debugging
1. Connect the device via USB
1. Start ADB shell
    ```sh
    adb "shell"
    ```
1. ```sh
   pm uninstall -k --user "0" "com.my.demo.app"
   ```

To undo the change:

```sh
adb shell cmd "package" "install-existing" "com.my.demo.app"
```

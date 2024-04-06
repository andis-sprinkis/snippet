# Run a command detached from the current shell instance

-   Using `nohup`

    ```sh
    nohup httpd 0</dev/null 1>/dev/null 2>/dev/null &
    ```

    `0</dev/null` instructs the non-Linux system shell to immediately close the stdin file.

    `1>/dev/null` and `2>/dev/null` redirect the stdout and stderr streams to `/dev/null`.

    `&` runs the command in background.

    This includes the process from the shell process group.

-   Using `disown`:

    ```sh
    httpd 1>/dev/null 2>/dev/null & disown
    ```

    `disown` is a shell built-in command.

    ⚠️ In POSIX sh, `disown` is undefined.

    This does not include the process in the shell process group.

-   Using `setsid`

    ```sh
    setsid httpd 1>/dev/null 2>/dev/null
    ```

    ⚠️ In macOS, `setsid` is not supported.

# Resources

-   [unix - How do I use the nohup command without getting nohup.out? - Stack Overflow answer by Mark Reed](https://stackoverflow.com/questions/10408816/how-do-i-use-the-nohup-command-without-getting-nohup-out/10408906#10408906)

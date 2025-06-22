# Run a command process detached from the current shell instance

- Using `nohup`:

    ```sh
    nohup httpd 0</dev/null 1>/dev/null 2>/dev/null &
    ```

    `0</dev/null` instructs the non-Linux system shell to immediately close the stdin file.

    `1>/dev/null` and `2>/dev/null` redirect the stdout and stderr streams to `/dev/null`.

    `&` runs the command in background.

    `nohup` redirects stdout and shields process from SIGHUP - a signal sent to a process when its controlling terminal is closed.

    `nohup` does not remove the process from the shell job control list.

    ***

    From [chrome - Why is chromium-browser killed when I close the terminal despite nohup? - Unix & Linux Stack Exchange](https://unix.stackexchange.com/questions/162749/why-is-chromium-browser-killed-when-i-close-the-terminal-despite-nohup/194640#194640):

    > The shell will typically send a SIGHUP to every process group that it knows it created - even ones started with `nohup` - and then exit.

    > **If the shell is `bash`, it will skip sending a SIGHUP to any process group that the user marked with `disown`.**

    > Running a command with `nohup` makes it ignore SIGHUP, but the process can change that. When the disposition of SIGHUP for a process is the default, then if it receives a SIGHUP, the process will be terminated.

    > The **workaround is to ... use the `disown` command** in your bash so that, **if bash has to exit, it does not send SIGHUP to the `chromium-browser` process group**. You can write a function to do this:

    > ```sh
    > mychromium () { /usr/bin/chromium-browser & disown $!; }
    > ```

- Using `disown`:

    ```sh
    httpd 1>/dev/null 2>/dev/null & disown
    ```

    `disown` is a shell built-in command.

    `disown` removes the process from the shell job control list.

    ⚠️ In POSIX sh, `disown` is undefined.

    This does not include the process in the shell process group.

- Using `setsid`

    ```sh
    setsid httpd 1>/dev/null 2>/dev/null
    ```

    ⚠️ macOS does not include `setsid`.

    This does not include the process in the shell process group.

# Resources

- [unix - How do I use the nohup command without getting nohup.out? - Stack Overflow answer by Mark Reed](https://stackoverflow.com/questions/10408816/how-do-i-use-the-nohup-command-without-getting-nohup-out/10408906#10408906)

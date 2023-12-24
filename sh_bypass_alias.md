# Running a shell command shadowed by an alias

There are several ways of doing this running a shell command shadowed by an alias. Let us say that the aliased command is `ls`.

1.  Prefix the command with `\`, e.g.
    ```sh
    \ls
    ```
1.  Quote the command, e.g.

    ```sh
    "ls"
    ```

    or

    ```sh
    'ls'
    ```

1.  Use `command` to run the command, e.g.
    ```sh
    command ls
    ```
1.  Use the full executable path, e.g.
    ```sh
    /usr/bin/ls
    ```
1.  Temporarily remove the alias, e.g.
    ```sh
    unalias ls
    ls
    ```

# Running a shell command shadowed by an alias or a function

There are multiple ways to do this.

Let us say that the aliased command is `ls`.

1.  Prefix the command with `\`, e.g.

    ```sh
    \ls
    ```

    Applies to alias.

    Doesn't apply to functions.

1.  Quote the command, e.g.

    ```sh
    "ls"
    ```

    or

    ```sh
    'ls'
    ```

    Applies to alias.

    Doesn't apply to functions.

1.  Use `env` to run the command, e.g.

    ```sh
    env ls
    ```

    Applies to alias and functions.

1.  Use `command` to run the command, e.g.

    ```sh
    command ls
    ```

    Applies to alias and functions.

1.  Use the full executable path, e.g.

    ```sh
    /usr/bin/ls
    ```

    Applies to alias and functions.

1.  Temporarily remove the alias, e.g.

    ```sh
    unalias ls
    ls
    ```

    Applies to alias.

    Doesn't apply to functions.

# Using `trap` to run an exit routine (log, clean up etc.) on shell script exit, preventing exiting and suspending the script

Exit on error:

```sh
set -e
```

Call script command `log` only on signals INT (2, C-c), QUIT (3, C-\\), TERM (15), STOP (23, C-s) and the normal EXIT (0):

```sh
trap "log" INT QUIT TERM STOP EXIT
```

Prevent signals INT (2, C-c), QUIT (3, C-\\), TERM (15), STOP (23, C-s) exiting and TSTP (24, C-z) from suspending the script:

```sh
trap '' INT QUIT TERM STOP TSTP
```

Unset the trap on signals INT, QUIT, TERM, STOP, TSTP:

```sh
trap - INT QUIT TERM STOP TSTP
```

Print `Suspending...` on signal TSTP (24, C-z):

```sh
trap "echo 'Suspending...'" TSTP
```

Print `Continuing...` on signal CONT (25, C-q):

```sh
trap "echo 'Continuing...'" TCONT
```

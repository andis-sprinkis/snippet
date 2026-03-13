# Process signal resettable countown timer Shell script

See the [example script](./example).

```sh
kill -USR1 $TIMER_PID
```

This script shell runtime cannot have `set -e` set or it would exit on signal.

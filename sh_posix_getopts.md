# Read shell script arguments using POSIX getopts

```sh
script="$(basename "$0")"

help_info="NAME
    ${script} - Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.

SYNOPSIS
    ${script} -a STRING [-b STRING] [-c]

DESCRIPTION
    Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.

    -a STRING
        Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.

    -b STRING
        Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.

    -c
        Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.

    -h
        Prints this message.
"

opt_a=
opt_b=
opt_c=
while getopts a:b:ch name; do
  case $name in
    a) opt_a="1"
       arg_opt_a="$OPTARG"
       ;;
    b) opt_b="1"
       arg_opt_c="$OPTARG"
       ;;
    c) opt_c="1"
       ;;
    h) echo "$help_info"
       exit
      ;;
    ?) echo "$help_info" 1>&2
       exit "2"
       ;;
  esac
done

[ ! "$opt_a" ] && {
  echo "$(basename "$0"): Option -a STRING is required." 1>&2
  exit 1
}
```

`-a` is treated as a required option.

Options `-a` and `-b` expect an argument.

When calling the script, if any of these options is specified without an argument, or if an unknown argument gets passed, the `?` case gets invoked.

## Resources

-   [getopts](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/getopts.html)

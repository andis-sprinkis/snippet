# Detecting the operating system running the shell script

There are multiple ways to do this.

1.  Using the `uname` command kernel name output:

    ```sh
    ostype="$(uname)"

    case "$ostype" in
      "Linux")
        echo "Linux"
      ;;
      "FreeBSD")
        echo "FreeBSD"
      ;;
      "OpenBSD")
        echo "OpenBSD"
      ;;
      "NetBSD")
        echo "NetBSD"
      ;;
      "DragonFlyBSD")
        echo "DragonFlyBSD"
      ;;
      "WindowsNT")
        echo "Windows"
      ;;
      "Darwin")
        echo "macOS"
      ;;
      "SunOS")
        echo "Solaris"
      ;;
      "AIX")
        echo "AIX"
      ;;
      *)
        echo "Unknown OS${ostype:+": ${ostype}"}"
      ;;
    esac
    ```

1.  Using the `$OSTYPE` shell variable:

    ```sh
    ostype="${OSTYPE:-""}"

    case "$ostype" in
      bsd*)
        echo "BSD"
      ;;
      darwin*)
        echo "macOS"
      ;;
      linux*)
        echo "Linux"
      ;;
      msys*)
        echo "Windows MSYS"
      ;;
      cygwin*)
        echo "Windows Cygwin"
      ;;
      solaris*)
        echo "Solaris"
      ;;
      aix*)
        echo "AIX"
      ;;
      android*)
        echo "Android"
      ;;
      *)
        echo "Unknown OS${ostype:+": ${ostype}"}"
      ;;
    esac
    ```

    ⚠️ Not all shells provide the `$OSTYPE` variable.

1. Combining both approaches

    ```sh
    # shellcheck disable=SC3028
    ostype="${OSTYPE:-"$(uname)"}"

    case "$ostype" in
      android*)
        echo "Android"
      ;;
      [lL]"inux"*)
        echo "Linux"
      ;;
      "FreeBSD")
        echo "FreeBSD"
      ;;
      "OpenBSD")
        echo "OpenBSD"
      ;;
      "NetBSD")
        echo "NetBSD"
      ;;
      "DragonFlyBSD")
        echo "DragonFlyBSD"
      ;;
      bsd*)
        echo "BSD"
      ;;
      msys*)
        echo "Windows MSYS"
      ;;
      cygwin*)
        echo "Windows Cygwin"
      ;;
      "WindowsNT")
        echo "Windows"
      ;;
      [dD]"arwin"*)
        echo "macOS"
      ;;
      solaris*|"SunOS")
        echo "Solaris"
      ;;
      aix*|"AIX")
        echo "AIX"
      ;;
      *)
        echo "Unknown OS${ostype:+": ${ostype}"}"
      ;;
    esac
    ``

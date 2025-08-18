# Detecting the operating system running the shell script

There are multiple ways to do this.

1.  Using the `uname` command kernel name output:

    ```sh
    case "$(uname)" in
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
        echo "Unknown OS"
      ;;
    esac
    ```

1.  Using the `$OSTYPE` shell variable:

    ```sh
    case "$OSTYPE" in
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
        echo "Unknown OS: ${OSTYPE}"
      ;;
    esac
    ```

    ⚠️ Not all shells provide the `$OSTYPE` variable.

1. Combining both approaches

    ```sh
    # shellcheck disable=SC3028
    ostype="${OSTYPE:-"$(uname)"}"

    case "$ostype" in
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
      "WindowsNT")
        echo "Windows"
      ;;
      msys*)
        echo "Windows MSYS"
      ;;
      cygwin*)
        echo "Windows Cygwin"
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
      android*)
        echo "Android"
      ;;
      *)
        echo "Unknown OS${ostype:+": ${ostype}"}"
      ;;
    esac
    ``

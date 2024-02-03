# Detecting the operating system running the shell script

There are multiple ways to do this.

1.  Using the `uname` command kernel name output:

    ```sh
    case $(uname) in
      "Linux") echo "Linux" ;;
      "FreeBSD") echo "FreeBSD" ;;
      "WindowsNT") echo "Windows" ;;
      "Darwin") echo "macOS" ;;
      "SunOS") echo "Solaris" ;;
      "AIX") ;;
      *) ;;
    esac
    ```

1.  Using the `$OSTYPE` shell variable:

    ```sh
    case "$OSTYPE" in
      bsd*) echo "BSD" ;;
      darwin*) echo "macOS" ;;
      linux*) echo "Linux" ;;
      msys*) echo "Windows MSYS" ;;
      solaris*) echo "Solaris" ;;
      *) echo "Unknown OS: ${OSTYPE}" ;;
    esac
    ```

    ⚠️ Not all shells provide the `$OSTYPE` variable.

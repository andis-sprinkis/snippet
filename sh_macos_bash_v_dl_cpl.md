# Downloading and compiling version of the GNU Bash shipped with Apple macOS

As of 2023-11-28.

From a [Stack Overflow post by the user dimo414](https://stackoverflow.com/a/41554230):

```sh
mkdir ~/bash_3_2_57
cd ~/bash_3_2_57
wget http://ftp.gnu.org/gnu/bash/bash-3.2.57.tar.gz
tar xvzf bash-3.2.57.tar.gz
cd bash-3.2.57
./configure
make
# if `make` fails due to yacc, run `sudo apt-get install byacc`
# No need to run `make install`
./bash -version
# GNU bash, version 3.2.57(1)-release (armv7l-unknown-linux-gnu)
# Copyright (C) 2007 Free Software Foundation, Inc.
```

The above code is licensed under [CC BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/).

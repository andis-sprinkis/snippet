# List all executables from `$PATH`

Approaches:

-  ```sh
   #!/usr/bin/env sh

   set -f

   IFS=:

   for p in $PATH; do
     set +f;
     [ -n "$p" ] || p=.;
     for f in "$p"/.[!.]* "$p"/..?* "$p"/*; do
       [ -f "$f" ] && [ -x "$f" ] && printf '%s\n' "${f##*/}";
     done;
   done;
   ```

   From [How to List All Executables From $PATH | Baeldung on Linux](https://www.baeldung.com/linux/path-binary-executables#1-using-basic-tooling) ([archived](https://archive.is/20240330134517/https://www.baeldung.com/linux/path-binary-executables#1-using-basic-tooling))
- ```sh
  stest -flx $(echo $PATH | tr : ' ') | sort -u
  ```

# Inline compilation and running of a C program in Shell

```sh
#!/usr/bin/env sh
set -eu

src=/tmp/application.c
out=/tmp/application

cat << EOF > "$src"
#include <stdio.h>

int main() {
  int n = 1;

  if (*(char *)&n == 1) {
    printf("Little endian\n");
  } else {
    printf("Big endian\n");
  }
}
EOF

cc -o "$out" "$src"
"$out"
rm "$out" "$src"
```

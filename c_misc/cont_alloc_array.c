#include <stdint.h>
#include <stdlib.h>

/* Array length and data stored in one continious allocation. */
/* 'malloc' can be used to allocate a pointer to a different size of it's
 * definition type specifier. */

typedef struct {
  unsigned int length;
  uint8_t data[1]; /* To be overallocated. */
} MyArrayOfBytes;

int main(int argc, char *argv[]) {
  unsigned int length = 20;
  MyArrayOfBytes *array;

  array = malloc((sizeof *array) + sizeof(unsigned int) * (length - 1));
  array->length = length;

  int i;
  for (i = 0; i < length; i++)
    array->data[i] = 0;

  return 0;
}

/* uint*_t are GNU C specific - https://www.gnu.org/software/libc/manual/html_node/Integers.html */

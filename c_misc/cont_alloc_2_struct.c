#include <stdint.h>
#include <stdlib.h>

/* A continious memory allocation of 2 struct. */
/* 'malloc' can be used to allocate a pointer to a different size of it's
 * definition type specifier. */
/* A risky approach. The struct members by the order and size MUST be
 * memory-aligned to the CPU word-size (typically 4 bytes) or MyStructB* b
 * assignment will be incorrect. */

typedef struct {
  uint64_t a;
  float b;
} MyStructA; /* To be overallocated */

typedef struct {
  float x;
  uint8_t y;
  double z;
} MyStructB;

int main(int argc, char *argv[]) {
  MyStructA *a;
  MyStructB *b;

  a = malloc(sizeof(MyStructA) + sizeof(MyStructB));
  b = (MyStructB *)&a[1];

  return 0;
}

/* uint*_t are GNU C specific - https://www.gnu.org/software/libc/manual/html_node/Integers.html */

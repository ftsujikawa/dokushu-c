#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t x = 891;
  int32_t *xptr = &x;
  printf("x=%i, xptr=%p\n", x, xptr);
  int32_t *zptr = xptr;
  printf("*zptr=%i, zptr=%p\n", *zptr, zptr);
  return 0;
}
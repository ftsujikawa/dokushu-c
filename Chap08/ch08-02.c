#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t x = 891;
  int32_t *xptr = &x;
  printf("x=%i, *xptr=%i\n", x, *xptr);
  char y = 'a';
  char *yptr = &y;
  printf("y=%c, *yptr=%c\n", y, *yptr);
  return 0;
}
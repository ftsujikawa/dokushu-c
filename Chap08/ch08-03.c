#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t x = 891;
  int32_t *xptr = &x;
  *xptr = 321;
  printf("x=%i, *xptr=%i\n", x, *xptr);
  char y = 'a';
  char *yptr = &y;
  *yptr = 'x';
  printf("y=%c, *yptr=%c\n", y, *yptr);
  return 0;
}
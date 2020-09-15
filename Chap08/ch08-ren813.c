#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t x = 1234;
  int32_t *xp = &x;
  *xp += 4;
  printf("%i\n", *xp);
  printf("%p\n", xp);
}
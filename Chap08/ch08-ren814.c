#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t a = 38;
  int32_t b = 42;
  int32_t *p1 = &a;
  *p1 += 2;
  int32_t *p2 = &b;
  *p2 -= *p1;
  (*p2)++;
  printf("a=%i, b=%i\n", a, b);
  //a = 40;
  //b = 3;
}
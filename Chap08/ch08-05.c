#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void swap(int32_t *x, int32_t *y) {
  int32_t temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {
  int32_t a = -99;
  int32_t b = 999;
  printf("a=%i, b=%i\n", a, b);
  swap(&a, &b);
  printf("a=%i, b=%i\n", a, b);
}
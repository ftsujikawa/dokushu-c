#include <stdio.h>

int div(int x, int y, int *p) {
  *p = x % y;
  return x / y;
}

int main(void) {
  int rem;
  int q = div(13, 4, &rem);
  printf("13 / 4 = %i ... %i\n", q, rem);
}
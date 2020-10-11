#include <stdio.h>

#define DEF_VAR(var, x) int var ## x = n * x

int main(void) {
  int n = 32;
  DEF_VAR(n, 2);
  DEF_VAR(n, 4);
  DEF_VAR(n, 8);
  printf("%i, %i, %i, %i\n", n, n2, n4, n8);
}
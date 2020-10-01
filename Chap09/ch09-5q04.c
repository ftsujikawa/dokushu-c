#include <stdio.h>

int *add(int *x, int *y) {
  *x += *y;
  return x;
}

int main(void) {
  int a = 3;
  int b = 8;
  printf("%i\n", *add(&a, &b));
}
// 正しい
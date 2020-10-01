#include <stdio.h>

int *add(int *x, int *y) {
  int ret = *x + *y;
  return &ret;
}

int main(void) {
  int a = 3;
  int b = 8;
  printf("%i\n", *add(&a, &b));
}
// 間違い
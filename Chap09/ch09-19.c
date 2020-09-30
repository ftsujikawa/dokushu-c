#include <stdio.h>

void test(int *x) {
  int y = 32;
  printf("%p\n", x);
  x = &y;
  printf("%p\n", x);
}

int main(void) {
  int x = 1;
  test(&x);
  printf("%i\n", x);
}
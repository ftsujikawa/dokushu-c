#include <stdio.h>

void test(int *x) {
  *x = 48;
}

int main(void) {
  int x = 0;
  printf("%i\n", x);
  test(&x);
  printf("%i\n", x);
}
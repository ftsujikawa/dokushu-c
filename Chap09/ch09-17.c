#include <stdio.h>

void test(int x) {
  x = 30;
}

int main(void) {
  int x = 10;
  printf("%i\n", x);
  test(x);
  printf("%i\n", x);
}
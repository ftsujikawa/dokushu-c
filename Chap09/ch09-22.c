#include <stdio.h>

void test(const int *x) {
  *x = 9;
}

int main(void) {
  int x = 12;
  test(&x);
}
#include <stdio.h>

int test(const int x) {
  x = 8;
}

int main(void) {
  int x = 12;
  test(x);
}
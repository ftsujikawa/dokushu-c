#include <stdio.h>

static int ex1(int x, int y) {
  printf("ch09-04-ex1:%i\n", x + y);
  return x + y;
}

extern int ex2(int x, int y) {
  printf("ex2:%i\n", x * y);
  return ex1(x, y);
}
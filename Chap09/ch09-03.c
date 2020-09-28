#include <stdio.h>

extern int ex2(int x, int y);
static int ex1(int x, int y) {
  printf("ch09-03-ex1:%i\n", x + y);
  return x + y;
}
int main(void) {
  ex1(2,3);
  ex2(5,6);
}
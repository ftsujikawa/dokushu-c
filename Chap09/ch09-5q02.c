#include <stdio.h>

int and(int x, int y) {
  int *px = &x;
  int *py = &y;
  return *px + *py;
}

int main(void) {
  printf("%i\n", add(3, 8));
}
// 正しい
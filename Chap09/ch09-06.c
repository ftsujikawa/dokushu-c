#include <stdio.h>
int add(int x, int y) {
  return x + y;
}
int main(void) {
  printf("4 + 3 = %i\n", add(4, 3));
}
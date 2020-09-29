#include <stdio.h>

int main(void) {
  printf("%i\n", add(1, 2, 3, 4, 5));
}
int add(int x, int y) {
  return x + y;
}
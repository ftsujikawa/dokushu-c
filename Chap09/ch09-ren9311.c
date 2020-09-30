#include <stdio.h>

void swap(int *px, int *py) {
  int temp = *px;
  *px = *py;
  *py = temp;
}
int main(void) {
  int x = 8;
  int y = 18;
  swap(&x, &y);
  printf("%i, %i\n", x, y);
}
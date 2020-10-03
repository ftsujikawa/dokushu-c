#include <stdio.h>

int main(void) {
  int x = 32;
  int y = 48;
  printf("x=%i, y=%i\n", x, y);
  for (int x = 0; x < 4; x++) {
    printf("x=%i, y=%i\n", x, y);
    if (x > 2) {
      int x = 64;
      printf("x=%i, y=%i\n", x, y);
    }
    printf("x=%i, y=%i\n", x, y);
  }
  printf("x=%i, y=%i\n", x, y);
}
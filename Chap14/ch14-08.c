#include <stdio.h>

#define BAD_SWAP(t, x, y) t tmp = x; x = y; y = tmp
#define SWAP(t, x, y) { t tmp = x; x = y; y = tmp; }

int main(void) {
  int x = 8;
  int y = 10;
  BAD_SWAP(int, x, y);
  printf("x=%i, y=%i\n", x, y);
/*
  BAD_SWAP(int, x, y);
  printf("x=%i, y=%i\n", x, y);
*/
  SWAP(int, x, y);
  printf("x=%i, y=%i\n", x, y);
}
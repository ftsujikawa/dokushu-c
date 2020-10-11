#include <stdio.h>

#define SWAP(t, x, y) {\
  t tmp = x;\
  x = y;\
  y = tmp;\
  }

  int main(void) {
    int x = 8;
    int y = 10;
    if (0)
      SWAP(int, x, y);
    else
      puts("hello");
  }
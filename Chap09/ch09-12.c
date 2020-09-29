#include <stdio.h>

typedef int x;

x fun(void) {
  x x = 8;
  return x;
}

x main(void) {
  printf("%i\n", fun());
}
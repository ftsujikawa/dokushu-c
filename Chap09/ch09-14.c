#include <stdio.h>

int hello(void);

int main(void) {
  printf("%i\n", hello("you"));
}

int hello(void) {
  return 32;
}
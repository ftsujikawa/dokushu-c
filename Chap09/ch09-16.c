#include <stdio.h>
int hello() {
  return 32;
}

int main(void) {
  printf("%i\n", hello("you"));
}
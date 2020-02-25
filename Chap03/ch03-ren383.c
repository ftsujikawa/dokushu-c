#include <stdio.h>
#include <stdint.h>

int main(void) {
  int32_t x = -10;
  uint16_t y = x;
  printf("%d\n", x);
  printf("%d\n", y);
}
#include <stdio.h>
#include <stdint.h>

int main(void) {
  int32_t x = -10;
  int16_t y = x;
  uint16_t z = y;
  x = z;
  printf("%d\n", x);
  printf("%d\n", y);
}
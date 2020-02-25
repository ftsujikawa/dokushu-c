#include <stdio.h>
#include <stdint.h>

int main(void) {
  int16_t x = -10;
  int32_t y = x;
  printf("%d\n", x);
  printf("%d\n", y);
  return 0;
}
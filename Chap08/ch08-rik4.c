#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int64_t x = 12345;
  int64_t *xp = &x;
  int64_t **xpp = &xp;
  uint8_t y;
  int32_t array[16];
  int32_t *p0 = array;
  int32_t *p1 = &array[3];
  // 2
  // 8(32ビットだから4)
  // 12345
  // 12345
  // 1
  // 16
  // 3
}
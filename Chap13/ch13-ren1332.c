#include <stdio.h>
#include <stdint.h>

int32_t change_endian(int32_t x) {
  int32_t x1, x2, x3, x4;
  x1 = x & 0xff;
  x2 = (x & 0xff00) >> 8;
  x3 = (x & 0xff0000) >> 16;
  x4 = (x & 0xff000000) >> 24;

  int32_t r = 0;
  r += x1 << 24;
  r += x2 << 16;
  r += x3 << 8;
  r += x4;

  return r;
}

int main(void) {
  int32_t x = 0x00bc614e;
  printf("%#x\n", change_endian(x));
}
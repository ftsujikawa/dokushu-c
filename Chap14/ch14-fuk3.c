#include <stdio.h>

int main(void) {
  // (1) x & 0xa == 0x8 || x & 0xa == 0x2
  // (2) x & 0xa != 0
  // (3) x & 0xe == (y >> 1) & 0xe
  // (4) if (!(x & 0x1)) {
  //       x++;
  //     }
  // ↑全部間違い
  // (1) x & 0x12
  // (2) (x & 0x12 == 0x12
  // (3) (x & 0x0e) == (y & 0x1c) >> 1
  // (4) x |= 1
  } 
}
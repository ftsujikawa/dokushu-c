#include <stdio.h>
#include <stdint.h>

int main(void) {
  uint8_t i8 = -1;
  uint16_t i16 = i8;
  uint32_t i32 = i16;
  uint64_t i64 = i32;
  printf("%u\n", i8);
  printf("%u\n", i16);
  printf("%u\n", i32);
  printf("%llu\n", i64);
}
#include <stdio.h>
#include <stdint.h>

int main(void) {
  int8_t i8 = -1;
  int16_t i16 = i8;
  int32_t i32 = i16;
  int64_t i64 = i32;
  printf("%i\n", i8);
  printf("%i\n", i16);
  printf("%i\n", i32);
  printf("%lli\n", i64);
}
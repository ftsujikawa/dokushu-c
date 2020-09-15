#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int16_t x = 123;
  int16_t *y = &x;

  int32_t x = 456;
  int32_t *y = &x;
}
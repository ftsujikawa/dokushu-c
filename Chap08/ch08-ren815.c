#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t x = 8;
  printf("%i\n", *&x); // 8
}
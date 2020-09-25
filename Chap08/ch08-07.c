#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t array[] = { 1, 2, 3, 4 };
  int32_t *p = array;
  for (int i = 0; i < 4; i++) {
    printf("*(p + %i) = %i\n", i, *(p + i));
  }
}
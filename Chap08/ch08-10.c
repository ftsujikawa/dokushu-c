#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t array[] = { 1, 2, 3, 4 };
  int32_t *p = array;
  for (size_t i = 0; i < sizeof array / sizeof(int32_t); i++) {
    printf("array[%zu] = %i\n", i, p[i]);
  }
}
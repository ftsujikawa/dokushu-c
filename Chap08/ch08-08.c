#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t array[] = { 1, 2, 3, 4 };
  int32_t *p = &array[2];
  printf("p = %p, *p = %i, p - 2 = %p, *(p - 2) = %i\n", p, *p, p - 2, *(p - 2));
}
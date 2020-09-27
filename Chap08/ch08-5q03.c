#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t *p0 = NULL;
  int32_t *p1 = p0 + 1;
  printf("%zu\n", p1 - p0);
  printf("%zu\n", (char *)p1 - (char *)p0);
}
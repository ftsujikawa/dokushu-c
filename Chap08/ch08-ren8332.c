#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  int32_t a = atoi(argv[1]);
  int32_t *pa = &a;
  int32_t r;
  int32_t *pr = &r;
  *(((int8_t *)pr) + 0) = *(((int8_t *)pa) + 3);
  *(((int8_t *)pr) + 1) = *(((int8_t *)pa) + 2);
  *(((int8_t *)pr) + 2) = *(((int8_t *)pa) + 1);
  *(((int8_t *)pr) + 3) = *(((int8_t *)pa) + 0);
  printf("0x%08x\n", r);
  return 0;
}
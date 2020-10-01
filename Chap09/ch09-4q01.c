#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint64_t func(uint64_t x) {
  if (x == 0) {
    return 1;
  }
  return x * func(x - 1);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  printf("%zu\n", func(atoi(argv[1])));
}
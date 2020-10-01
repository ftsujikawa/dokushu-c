#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  uint64_t total = 1;
  for (uint64_t i = 1; i <= atoi(argv[1]); ++i) {
    total *= i;
  }
  printf("%zu\n", total);
}
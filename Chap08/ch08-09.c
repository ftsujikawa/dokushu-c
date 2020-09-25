#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int32_t array[argc * 4];
  printf("array size = %zu, count = %zu\n", sizeof array, sizeof array / sizeof array[0]);
}
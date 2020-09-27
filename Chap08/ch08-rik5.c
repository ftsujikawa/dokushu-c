#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int compare(const void *p0, const void *p1) {
  return *(int32_t *)p1 - *(int32_t *)p0;
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    return 1;
  }
  int32_t array[argc - 1];
  for (size_t i = 0; i < argc - 1; i++) {
    array[i] = atoi(argv[i + 1]);
  }
  qsort(array, sizeof(array) / sizeof array[0], sizeof(int32_t), compare);
  for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    printf("%i\n", array[i]);
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *p0, const void *p1) {
  return strcmp(*(char **)p0, *(char **)p1);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 1;
  }
  char *array[argc - 1];
  for (size_t i = 0; i < argc - 1; i++) {
    array[i] = argv[i + 1];
  }
  qsort(array, sizeof(array) / sizeof(array[0]), sizeof(char *), comp);
  for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    printf("%s\n", array[i]);
  }
}
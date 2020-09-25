#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  for (int i = strlen(argv[1]) - 1; i >= 0; --i) {
    printf("%c", argv[1][i]);
  }
  printf("\n");
}
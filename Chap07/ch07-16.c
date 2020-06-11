#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc == 3) {
    int result = strcmp(argv[1], argv[2]);
    printf("resutl = %i\n", result);
  }
}
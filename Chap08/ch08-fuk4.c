#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) return 0;
  size_t len = strlen(argv[1]);
  char result[len + 1];
  int j = 0;
  for (int i = strlen(argv[1]) - 1; i >= 0; i--) {
    result[j++] = argv[1][i];
  }
  result[j] = '\0';
  printf("%s => %s\n", argv[1], result);
}
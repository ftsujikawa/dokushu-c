#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  if (argc == 2) {
    size_t len = strlen(argv[1]);
    char dest[len + 1];
    strcpy(dest, argv[1]);
    for (size_t i = 0; i < len; i++) {
      dest[i] = toupper(dest[i]);
    }
    printf("src=%s, dest=%s\n", argv[1], dest);
  }
}
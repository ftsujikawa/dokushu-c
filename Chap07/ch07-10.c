#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    size_t len = strlen(argv[i]);
    printf("%s => %zi\n", argv[i], len);
  }
}
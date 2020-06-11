#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc == 3) {
    int result = strcmp(argv[1], argv[2]);
    if (result > 0) {
      puts(argv[1]);
    }
    else if (result < 0) {
      puts(argv[2]);
    }
    else {
      puts("same!");
    }
  }
}
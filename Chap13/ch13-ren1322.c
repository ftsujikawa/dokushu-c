#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  int x = atoi(argv[1]);
  if ((x & 1) == 0) {
    puts("?");
  }
  else {
    puts("!");
  }
}
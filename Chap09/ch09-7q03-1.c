#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = 1;
  if (argc == 1) {
    x = 0;
  }
  else {
    x = atoi(argv[1]);
  }

  printf("%i\n", x * 2);
}
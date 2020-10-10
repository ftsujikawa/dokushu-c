#include <stdio.h>
#define PRINT_INT(x) \
  printf("%i\n", x)

  int main(int argc, char *argv[]) {
    PRINT_INT(argc);
  }
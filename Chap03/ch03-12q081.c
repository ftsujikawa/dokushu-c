#include <stdio.h>
#include <stdlib.h>
#define MUL(x, y) atoi(x) * atoi(y)
int main(int argc, char *argv[]) {
  printf("%i\n", MUL(argv[1], argv[2]));
  printf("%i\n", MUL(argv[1], "8"));
}
#include <stdio.h>
#include <stdlib.h>
#define MUL(x, y) atoi(x) * (y)
int main(int argc, char *argv[]) {
  printf("%i\n", MUL(argv[1], atoi(argv[2])));
  printf("%i\n", MUL(argv[1], 8));
}
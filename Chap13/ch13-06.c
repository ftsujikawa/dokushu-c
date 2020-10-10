#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    puts("2つの数値を引数へ与えてください。");
    return 1;
  }
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  x ^= y;
  y ^= x;
  x ^= y;
  printf("%i %i\n", x, y);
}

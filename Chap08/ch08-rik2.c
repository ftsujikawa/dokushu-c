#include <stdio.h>

int main(void) {
  int x[] = { 1, 2, 3, 4 };
  int *p = x;
  printf("%i\n", p[2]);
}
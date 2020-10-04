#include <stdio.h>

int main(void) {
  printf("%4f\n", 1.00001);
  printf("%3f\n", 1.00001);
  printf("%4.3f\n", 1.00001);
  printf("%4.1f\n", 1.00001);
  printf("%8.1f\n", 1.00001);
  printf("%08.1f\n", 1.00001);
}
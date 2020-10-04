#include <stdio.h>

int main(void) {
  printf("%4i\n", 1000);
  printf("%3i\n", 1000);
  printf("%4.3i\n", 1000);
  printf("%4.1i\n", 1000);
  printf("%4i\n", 10);
  printf("%3i\n", 10);
  printf("%04i\n", 10);
  printf("%4.3i\n", 10);
  printf("%4.1i\n", 10);
}
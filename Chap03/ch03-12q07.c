#include <stdio.h>

int main(void) {
  int n = 10;
  printf("%i\n", n++); // 10
  printf("%i\n", ++n); // 12
  printf("%i\n", n--); // 12
  printf("%i\n", --n); // 10
  printf("%i\n", n);   // 10
}
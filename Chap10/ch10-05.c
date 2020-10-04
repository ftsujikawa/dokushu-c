#include <stdio.h>

int main(void) {
  char *p = "0123456789";
  printf("%12s\n", p);
  printf("%12.3s\n", p);
  printf("%.3s\n", p);
}
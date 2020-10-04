#include <stdio.h>

int main(void) {
  printf("%*.3s\n", 5, "abc");
  printf("%5.*s\n", 3, "abc");
  printf("%*.*s\n", 5, 3, "abc");
}
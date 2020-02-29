#include <stdio.h>
#include <limits.h>

int main(void) {
  int n = UINT_MAX;
  if (n + 1) {
    puts("true");
  }
}
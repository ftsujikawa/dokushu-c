#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("%u\n", (unsigned int)INT_MIN);
  printf("lli\n", (long long)(unsigned int)INT_MIN);
}
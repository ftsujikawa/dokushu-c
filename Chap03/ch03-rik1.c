#include <stdio.h>
#include <limits.h>

int main(void) {
  long long ll = INT_MAX;
  printf("%lli\n", ll * ll);

  printf("%lli\n", (long long)INT_MAX * (long long)INT_MAX);
}
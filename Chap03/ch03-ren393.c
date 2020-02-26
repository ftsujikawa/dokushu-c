#include <stdio.h>
#include <limits.h>

int main(void) {
  int i = INT_MAX;
  unsigned int ui = UINT_MAX;
  long l = LONG_MAX;
  unsigned long ul = ULONG_MAX;
  long long ll = LLONG_MAX;
  unsigned long long ull = ULLONG_MAX;
  printf("%i\n", i);
  printf("%u\n", ui);
  printf("%li\n", l);
  printf("%lu\n", ul);
  printf("%lli\n", ll);
  printf("%llu\n", ull);
}
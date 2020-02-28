#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("%lli\n", LLONG_MAX);//間違い
  printf("llu\n", ULLONG_MAX);//正解
  printf("%lli\n", LLONG_MIN);
}
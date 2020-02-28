#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("%i\n", INT_MIN);
  printf("%i\n", INT_MAX);
  printf("%f\n", DBL_MIN);//間違い
  printf("%f\n", -DBL_MAX);//正解
  printf("%f\n", DBL_MAX);
}
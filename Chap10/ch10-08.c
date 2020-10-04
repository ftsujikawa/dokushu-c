#include <stdio.h>

int main(void) {
  int n;
  char c;
  long l;
  double d;
  char str[5];
  int ret = scanf("%i,%*c,%c,%li,%lf,%4s", &n, &c, &l, &d, str);
  printf("read %i values\n", ret);
  printf("n=%i, c=%c, l=%li, d=%f, str=%s\n", n, c, l, d, str);
}
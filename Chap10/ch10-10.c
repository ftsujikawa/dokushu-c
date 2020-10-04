#include <stdio.h>

int main(void) {
  char str[80];
  snprintf(str, 80, "%i, %f, %.10s", 3, 3.0, "abcdefghijklm");
  puts(str);
  int n;
  double d;
  char str2[80];
  int ret = sscanf(str, "%i, %lf, %10s", &n, &d, str2);
  printf("ret=%i, %i, %f, %.10s\n", ret, n, d, str2);
}
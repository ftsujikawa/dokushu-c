#include <stdio.h>
#include <stdarg.h>

void x(int *np, ...) {
  va_list ap;
  va_start(ap, np);
  for (int i = 0; ; i++) {
    int *p = va_arg(ap, int *);
    if (!p) {
      break;
    }
    *p = i;
  }
  va_end(ap);
}

int main(void) {
  int a, b, c, d, count = 4;
  x(&count, &a, &b, &c, &d, NULL);
  printf("%i, %i, %i, %i\n", a, b, c, d);
}
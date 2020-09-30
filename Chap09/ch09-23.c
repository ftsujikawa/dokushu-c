#include <stdio.h>
#include <stdarg.h>

int calc_all(char ope, ...) {
  va_list ap;
  va_start(ap, ope);
  int total = 0;
  for (;;) {
    int n = va_arg(ap, int);
    if (n < 0) {
      break;
    }
    if (ope == '+') {
      total += n;
    }
    else if (ope == '-') {
      total -= n;
    }
  }
  va_end(ap);
  return total;
}

int main(void) {
  printf("%i\n", calc_all('+', 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1));
  printf("%i\n", calc_all('-', 10, 2, 3, -1));
}

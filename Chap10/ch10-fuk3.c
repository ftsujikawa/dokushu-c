#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void func(char *name, ...) {
  va_list ap;
  va_start(ap, name);
  int result = 0;
  int count = 0;
  for (;;) {
    int n = va_arg(ap, int);
    if (n < 0) {
      break;
    }
    if (count != 0) {
      printf(", ");
    }
    result += n;
    ++count;
    printf("%i", n);
  }
  if (strcmp(name, "•½‹Ï") == 0) {
    result /= count;
  }
  va_end(ap);
  printf("‚Ì%s‚Í%i‚Å‚·B\n", name, result);
}

int main(void) {
  func("‡Œv", 1, 2, 3, -1);
  func("•½‹Ï", 1, 2, 3, -1);
  func("‡Œv", 1, 2, 3, 4, 5, -1);
  func("•½‹Ï", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1);
}
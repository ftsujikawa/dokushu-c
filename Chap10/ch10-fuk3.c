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
  if (strcmp(name, "平均") == 0) {
    result /= count;
  }
  va_end(ap);
  printf("の%sは%iです。\n", name, result);
}

int main(void) {
  func("合計", 1, 2, 3, -1);
  func("平均", 1, 2, 3, -1);
  func("合計", 1, 2, 3, 4, 5, -1);
  func("平均", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1);
}
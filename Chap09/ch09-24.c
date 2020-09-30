#include <stdio.h>
#include <stdarg.h>

void show(size_t count, ...) {
  va_list ap;
  va_start(ap, count);
  for (size_t i = 0; i < count; i++) {
    puts(va_arg(ap, char *));
  }
  va_end(ap);
}

int main(void) {
  show(6, "I", "want", "to", "be", "a", "machine");
  show(4, "walking", "they", "are", "walking");
}

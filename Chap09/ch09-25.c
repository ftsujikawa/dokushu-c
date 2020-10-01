#include <stdio.h>

int counter(void) {
  static int c = 0;
  return ++c;
}

int non_counter(void) {
  int c = 0;
  return ++c;
}

int main(void) {
  for (size_t i = 0; i < 10; i++) {
    printf("counter=%i\n", counter());
    printf("non_counter=%i\n", non_counter());
  }
}
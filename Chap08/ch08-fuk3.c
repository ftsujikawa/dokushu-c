#include <stdio.h>

int main(void) {
  char x[] = "Hello";
  size_t len = strlen(x);
  // 間違い char y[] = x;
  size_t len = strlen(x) + 1;
  char y[len];
  // 間違い strcpy(x, y);
  strcpy(y, x);
  if (strcmp(x, y) == 0) {
    printf("match!");
  }
}
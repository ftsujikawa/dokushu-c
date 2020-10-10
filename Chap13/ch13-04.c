#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%i as '%c'\n", i, i | 0x30);
  }
}
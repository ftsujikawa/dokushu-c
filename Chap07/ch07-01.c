#include <stdio.h>

int main(void) {
  char digi[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
  for (int i = 0; i < 10; ++i) {
    printf("letter=%c, code=%i\n", digi[i], digi[i]);
  }
}
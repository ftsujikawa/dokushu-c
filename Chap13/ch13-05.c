#include <stdio.h>

int main(void) {
  char ascii_digits[] = "0123456789";
  for (int i = 0; i < 10; i++) {
    printf("%c = %i\n", ascii_digits[i], ascii_digits[i] & 0x0f);
  }
}
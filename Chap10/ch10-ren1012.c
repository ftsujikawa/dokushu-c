#include <stdio.h>

int main(void) {
  printf("%3.1f\n", 1.001);
  printf("%04i\n", 32);
  printf("%.3s\n", "abcdef");
  printf("%8.2f\n", 48.0);
  // 間違いprintf("0X%x\n", 32);
  printf("%#X\n", 32);
}
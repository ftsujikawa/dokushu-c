#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int32_t a = 0x01234567;
  if (*(int8_t *)&a == 0x01) {
    puts("ビッグインディアン");
  }
  else {
    puts("リトルインディアン");
  }
  return 0;
}
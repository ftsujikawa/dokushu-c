#include <stdio.h>

int main(void) {
  int i = 0;
  // while (++i <= 10) { //間違い
  while (++i < 10) { // 正解}
    printf("%i\n", i);
  }
}
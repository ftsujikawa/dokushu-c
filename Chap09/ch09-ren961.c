#include <stdio.h>

int main(void) {
  // (1) 不定
  // (2) i変数は、for文の中だけで有効。
  // (3) 
  int x;
  for (int i = 0; i < 5; i++) {
    if (i == 3) {
      x = i;
    }
  }
  printf("%i\n", x);
}
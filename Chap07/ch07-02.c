#include <stdio.h>

int main(void) {
  char a0 = '\xE3';
  char a1 = '\x81';
  char a2 = '\x82';
  printf("%c%c%c\n", a0, a1, a2);
}
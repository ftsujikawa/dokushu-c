#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  char ch;
  char *chp = &ch;
  *chp = 'A';
  printf("%c\n", ch);

  int32_t n;
  int32_t *p = &n;
  *p = 128;
  printf("%i\n", n);
}
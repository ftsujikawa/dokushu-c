#include <stdio.h>
#include <stdint.h>

int main(void) {
  int32_t a = 32;
  int32_t *ap = &a;

  char a[] = "abcdef";
  char *ap = a;
}
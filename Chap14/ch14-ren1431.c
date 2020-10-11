#include <stdio.h>

#define INITSTR(x, y, z) x ## y = # z

int main(void) {
  char *INITSTR(c, ptr, hello);
// char *cptr = "hello";
  char INITSTR(c, array[], bye);
// char carray[] = "bye";
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  int x = atoi(argv[1]);
  if (!x) {
    puts("0");
  }
  else {
    int pos = x;
    int shift = 0;
    for (; (pos & 1) == 0; shift++) {
      pos >>= 1;
    }
    printf("%i\n", ~pos << shift | 1 << shift);
  }
}
#include <stdio.h>

#define INT(x, y, z) int x ## y = z

int main(void) {
  INT(x, 0, 1);
  INT(x, 1, 2);
  INT(x, 2, 3);
  INT(x, 3, 4);
  INT(x, 4, 5);
  INT(y, 0, 10);
  INT(y, 1, 20);
  INT(y, 2, 30);
  INT(y, 3, 40);
  INT(y, 4, 50);
}
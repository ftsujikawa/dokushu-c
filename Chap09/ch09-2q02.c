#include <stdio.h>

int ping(int x, int y);
int pong(int x, int y);

int main(void) {
  printf("%i\n", ping(10, 20));
}

int ping(int x, int y) {
  return pong(x, y - 1);
}

int pong(int x, int y) {
  if (y == 0) {
    return x;
  }
  return ping(x * y, y);
}
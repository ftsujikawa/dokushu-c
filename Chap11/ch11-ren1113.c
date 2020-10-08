#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

POINT move_to(POINT p, int x, int y) {
  p.x += x;
  p.y += y;
  printf("&p(%p) in move_to\n", &p);
  return p;
}

int main(void) {
  POINT p = {1, 2};
  printf("&p(%p) in main\n", &p);
  printf("%i, %i\n", p.x, p.y);
  POINT pp = move_to(p, 10, -10);
  printf("&pp(%p) in main\n", &pp);
  printf("%i, %i\n", p.x, p.y);
  printf("%i, %i\n", pp.x, pp.y);
}
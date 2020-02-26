#include <stdio.h>
#include <stdlib.h>

#define A(x,y) int x = atoi(argv[y]);
#define P(h) printf("%i\n", x h y);

int main(int argc, char *argv[])
{
  A(x, 1)
  A(y, 2)
  P(+)
  P(-)
  P(*)
  P(/)
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  printf("%i\n", x + y);
  printf("%i\n", x - y);
  printf("%i\n", x * y);
  printf("%i\n", x / y);
}
*/
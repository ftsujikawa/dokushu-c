#include <stdio.h>
#include "ch09-1q03.h"

/* 間違いで、いらないextern */ int ex1(int x, int y)
{
  printf("ex1:%i\n", x + y);
  return x + y;
}

int main(void)
{
  ex2(5, 6);
}
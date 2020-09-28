#include <stdio.h>
#include "ch09-1q03.h"

/* 間違いでいらないextern*/ int ex2(int x, int y)
{
  printf("ex2:%i\n", x * y);
  return ex1(x, y);
}
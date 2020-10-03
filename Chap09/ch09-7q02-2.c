#include <stdio.h>

#include "ch09-7q02.h"

static int add(int x, int y)
{
  return x + y;
}

static int sub(int x, int y)
{
  return x - y;
}

static int mul(int x, int y)
{
  return x * y;
}

static int divi(int x, int y)
{
  if (y == 0)
  {
    return 0;
  }
  return x / y;
}

FUNC select(char ch)
{
  if (ch == '+')
  {
    return add;
  }
  else if (ch == '-')
  {
    return sub;
  }
  else if (ch == 'x' || ch == 'X')
  {
    return mul;
  }
  else if (ch == '/')
  {
    return divi;
  }
  else
  {
    return NULL;
  }
}

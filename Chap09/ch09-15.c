#include <stdio.h>

int hello();

int main(void)
{
  printf("%i\n", hello("you"));
}

int hello(void)
{
  return 32;
}
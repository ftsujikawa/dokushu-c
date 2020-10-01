#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int64_t func(int64_t x)
{
  static int64_t prev = 0;
  if (x == 0)
  {
    return 1;
  }
  int64_t now = x * func(x - 1);
  if (now == 0) {
    return 0;
  }
  else if (prev > now) {
    printf("failed at x = %lli\n", x);
    return 0;
  }
  else {
    prev = now;
    return now;
  }
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    return 1;
  }
  printf("%lli\n", func(atoi(argv[1])));
}
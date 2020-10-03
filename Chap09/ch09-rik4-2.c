#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    return 1;
  }
  int res = 1;
  for (int i = 0; i < atoi(argv[1]); i++) {
    res *= 6;
  }
  double rit = 1.0 / res;
  printf("1/%i(%8.6f)\n", res, rit);
}
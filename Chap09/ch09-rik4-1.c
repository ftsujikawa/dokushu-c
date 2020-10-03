#include <stdio.h>
#include <stdlib.h>

int mul(int x) {
  if (x == 0) {
    return 1;
  }
  return 6 * mul(x - 1);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  int res = mul(atoi(argv[1]));
  double rit = 1.0 / res;
  printf("1/%i(%8.6f)\n", res, rit);
}
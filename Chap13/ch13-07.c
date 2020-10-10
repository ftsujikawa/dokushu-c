#include <stdio.h>
#include <stdlib.h>

int mult(int x, int multipier) {
  int result = 0;
  if (multipier & 1) {
    result = x;
    multipier -= 1;
  }
  for (; multipier > 0;) {
    if (multipier >= 8) {
      result += x << 3;
      multipier -= 8;
    }
    else if (multipier >= 4) {
      result += x << 2;
      multipier -= 4;
    }
    else {
      result += x << 1;
      multipier -= 2;
    }
  }
  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    puts("被乗数と乗数を指定してください。");
    return 1;
  }
  int x = atoi(argv[1]);
  int multiplier = atoi(argv[2]);
  if (multiplier <= 0 || multiplier > 15) {
    puts("乗数は1から15の範囲で指定してください。");
    return 2;
  }
  printf("%i * %i = %i\n", x, multiplier, mult(x, multiplier));
}
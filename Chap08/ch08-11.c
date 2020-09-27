#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) {
  return x + y;
}

int mul(int x, int y) {
  return x * y;
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    return 1;
  }

  int (*calc)(int, int);
  char ch = *argv[1];
  int result;
  if (ch == '+') {
    calc = add;
    result = 0;
  }
  else if (ch == 'x') {
    calc = mul;
    result = 1;
  }
  else {
    return 2;
  }

  for (int i = 2; i < argc; i++) {
    result = calc(result, atoi(argv[i]));
  }
  printf("%i\n", result);
}
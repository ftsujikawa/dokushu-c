#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) {
  return x + y;
}

int sub(int x, int y) {
  return x - y;
}

int mul(int x, int y) {
  return x * y;
}

int divi(int x, int y) {
  if (y == 0) {
    return 0;
  }
  return x / y;
}

typedef int (*FUNC)(int, int);

FUNC select(char ch) {
  if (ch == '+') {
    return add;
  }
  else if (ch == '-') {
    return sub;
  }
  else if (ch == 'x' || ch == 'X') {
    return mul;
  }
  else if (ch == '/') {
    return divi;
  }
  else {
    return NULL;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    puts("usage: a.exe +/- number number");
    return 1;
  }
  int (*calc)(int,int) = select(argv[1][0]);
  if (calc) {
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
    printf("%i %c %i = %i\n", x, argv[1][0], y, calc(x, y));
  }
  else {
    puts("wrong operator");
  }
}
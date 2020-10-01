#include <stdio.h>

const int *add(const int *x, const int *y) {
  *(int *)x += *y;
  return x;
}

int main(void) {
  int a = 3;
  int b = 8;
  printf("%i\n", *add(&a, &b));
}
// 正しい ← 間違い：constポインターを無理やりキャストで変更している。
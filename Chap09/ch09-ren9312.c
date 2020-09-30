#include <stdio.h>
#include <stdlib.h>

int add(const char *p0, const char *p1) {
// 間違い。constが必要。int add(char *p0, char *p1) {
  return atoi(p0) + atoi(p1);
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    puts("usage: a.exe number number");
    return 1;
  }
  printf("%i\n", add(argv[1], argv[2]));
}
#include <stdio.h>

int test(len, c)
  int len;
  char c;
{
  for (int i = 0; i < len; i++) {
    printf("%c", c);
  }
  puts("");
  return len;
}
int main() {
  test(4, '!', 8);
}
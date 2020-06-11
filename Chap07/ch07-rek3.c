#include <stdio.h>
#include <string.h>

int main(void) {
  //char buf[] = "Hello!"; // 間違い
  char buf[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
  puts(buf);
}
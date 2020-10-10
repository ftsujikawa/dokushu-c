#include <stdio.h>
// A : 65(0x41) 01000001
// a : 97(0x61) 01100001



int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  char ch = argv[1][0];
  if ('A' <= ch && ch <= 'Z') {
    printf("%c\n", ch | 0x20);
  }
  else {
    puts("not a capital letter!");
  }
}
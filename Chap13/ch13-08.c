#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

static char Hto10[] = "0123456789abcdef";
static int HtoNum[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

int main(int argc, char *argv[]) {
  if (argc != 2 || strlen(argv[1]) != 2) {
    puts("2文字の16進数を与えてください。");
    return 1;
  }
  uint8_t number = 0;
  for (int i = 0; i < 2; i++) {
    number <<= 4;
    char ch = tolower(argv[1][i]);
    if ((ch < '0' || ch > '9') && (ch < 'a' || ch > 'z')) {
      puts("0-9,A-F,a-fの範囲で指定してください。");
      return 2;
    }
    for (size_t n = 0; n < sizeof(Hto10) / sizeof(char); n++) {
      if (ch == Hto10[n]) {
        number += HtoNum[n];
        break;
      }
    }
  }
  printf("number = %i(%x)\n", number, number);
}
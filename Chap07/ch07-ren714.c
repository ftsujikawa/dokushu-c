#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  char c = argv[1][0];
  if (argc == 2) {
    if (isalpha(c)) {
      if (isupper(c)) {
        printf("%c\n", tolower(c));
        return 0;
      }
    }
    else if (isdigit(c)) {
      printf("%i\n", atoi(&c) + 3);
      return 0;
    }
  }
  printf("英大文字または数字を入力してください");
}
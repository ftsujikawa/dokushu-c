#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strtoupper(char str[]) {
  for (int i = 0; i < strlen(str); ++i) {
    str[i] = toupper(str[i]);
  }
}

int main(int argc, char *argv[]) {
  if (argc == 3) {
    /*
    size_t len = strlen(argv[1]) < strlen(argv[2]) ? strlen(argv[1]) : strlen(argv[2]);
    int result = 0;
    for (int i = 0; i < len; ++i) {
      if (tolower(argv[1][i]) > tolower(argv[2][i])) {
        result = 1;
        break;
      }
      else if (tolower(argv[1][i]) < tolower(argv[2][i])) {
        result = -1;
        break;
      }
    }
    printf("%i\n", result);
    */
    char c1[strlen(argv[1]) + 1];
    char c2[strlen(argv[2]) + 1];
    strcpy(c1, argv[1]);
    strcpy(c2, argv[2]);
    strtoupper(c1);
    strtoupper(c2);
    int result = strcmp(c1, c2);
    if (result > 0) {
      puts("1");
    }
    else if (result == 0) {
      puts("0");
    }
    else {
      puts("-1");
    }
  }
  else {
    return 1;
  }
}
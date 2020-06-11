#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    size_t sumlen = 0;
    for (int i = 1; i < argc; i++) {
      sumlen += strlen(argv[i]);
    }
    char result[sumlen + 1];
    result[0] = '\0';
    for (int i = 1; i < argc; ++i) {
      strcat(result, argv[i]);
    }
    for (int i = 0; i < strlen(result); ++i) {
      result[i] = tolower(result[i]);
    }
    puts(result);
  }
  else {
    return 1;
  }
}
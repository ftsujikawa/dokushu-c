#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; ++i) {
    if (strlen(argv[i]) == 1) {
      if (isalpha(argv[i][0])) {
        puts("A");
      }
      else if (isnumber(argv[i][0])) {
        puts("B");
      }
      else {
        puts("C");
      }
    }
  }
}
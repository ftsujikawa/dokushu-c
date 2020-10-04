#include <stdio.h>
int main(void) {
  char buffer[10];
  while (fgets(buffer, 10, stdin) != NULL) {
    puts(buffer);
  }
}
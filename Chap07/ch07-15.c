#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 5
#define HELLO "Hello "

int main(int argc, char *argv[]) {
  if (argc == 2) {
    size_t hello_len = strlen(HELLO);
    char hello[hello_len + MAX_NAME_LEN + 1];
    strcpy(hello, HELLO);
    strncat(hello, argv[1], MAX_NAME_LEN);
    puts(hello);
  }
}
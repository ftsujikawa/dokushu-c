#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 4

int main(int argc, char *argv[]) {
  char buff[MAX_STR_LEN + 1];
  for (int i = 1; i < argc; i++) {
    strncpy(buff, argv[i], MAX_STR_LEN);
    buff[MAX_STR_LEN] = '\0';
    puts(buff);
  }
}
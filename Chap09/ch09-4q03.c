#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HELLO "hello "

char *create_hello(char *result, const char *name) {
  strcpy(result, HELLO);
  strcat(result, name);
  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  char result[strlen(HELLO) + strlen(argv[1]) + 1];
  puts(create_hello(result, argv[1]));
}
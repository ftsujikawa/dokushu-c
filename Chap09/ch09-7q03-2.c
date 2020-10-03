#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO "hello"
#define BYE "bye"

char *create_message(char *message, const char *name, const char *greeting) {
  strcpy(message, greeting);
  strcat(message, " ");
  strcat(message, name);
  return strcat(message, "!");
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  char message[strlen(argv[1]) + strlen(HELLO) + 3];
  puts(create_message(message, argv[1], HELLO));
  puts(create_message(message, argv[1], BYE));
}
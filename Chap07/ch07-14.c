#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 5

int main(int argc, char *argv[]) {
  if (argc == 2) {
    char name[MAX_NAME_LEN + 1];
    strncpy(name, argv[1], MAX_NAME_LEN);
    name[MAX_NAME_LEN] = '\0';
    printf("Hello %s\n", name);
  }
}
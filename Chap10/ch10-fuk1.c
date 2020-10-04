#include <stdio.h>
#include <stdlib.h>

void print_count(void) {
  static int count = 0;
  printf("%i\n", ++count);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  for (int i = 0; i < atoi(argv[1]); i++) {
    print_count();
  }
}
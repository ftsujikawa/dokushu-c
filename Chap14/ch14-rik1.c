#include <stdio.h>

#define PRINT_ARGC(var, sp) printf("%s=" #sp "\n", #var, var)
#define PRINT_ARGV(n, var) printf("argv[%i]=%s\n", n, var)


int main(int argc, char *argv[]) {
  PRINT_ARGC(argc, %i);
  for (int i = 0; i < argc; i++) {
    PRINT_ARGV(i, argv[i]);
  }
}
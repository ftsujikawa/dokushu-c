#include <stdio.h>

#define PRINT(var, sp) printf("%s=" # sp "\n", #var, var)

int main(int argc, char *argv[]) {
  PRINT(argc, %i);
  PRINT(argv[0], %s);
}
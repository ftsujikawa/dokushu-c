#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  printf("%f\n", x + y);
  printf("%f\n", x - y);
  printf("%f\n", x * y);
  printf("%f\n", x / y);
}
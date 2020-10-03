#include <stdio.h>
extern int global;
void print_global() {
  printf("%i\n", global);
  global += 1;
}

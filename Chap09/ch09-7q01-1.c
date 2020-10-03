#include <stdlib.h>
#include "ch09-7q01.h"

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    int n = atoi(argv[i]);
    if (n % 2 == 1) {
      odd(i, n);
    }
    else {
      even(i, n);
    }
  }
}
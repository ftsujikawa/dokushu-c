#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = 0;
  int i = 0;
  if (argc > 3)
  {
    x = 2;
  }
  else {
    return 1;
  }
  for (int y = x; y < argc; y++) {
    if (atoi(argv[y]) >= 10) {
      int z = atoi(argv[y]) % 10;
      i += z;
    }
    else {
      i += atoi(argv[y]);
    }
  }
  printf("%i\n", i);
}
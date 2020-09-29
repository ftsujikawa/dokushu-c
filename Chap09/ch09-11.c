#include <stdio.h>
#include <string.h>
int add(int x, int y) {
  return x + y;
}
int sub(int x, int y) {
  return x - y;
}

typedef int (*CALCFUN)(int, int);

CALCFUN select(char *name) {
  if (strcmp(name, "add") == 0) {
    return add;
  }
  else if (strcmp(name, "sub") == 0) {
    return sub;
  }
  else {
    return NULL;
  }
}
int main(void) {
  printf("%i\n", select("sub")(8, 5));
}
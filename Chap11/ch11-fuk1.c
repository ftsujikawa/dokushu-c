#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  double d;
  int x;
  char str[32];
  char buf[128];
  while (fgets(buf, sizeof(buf), stdin) != NULL) {
    int i = sscanf(buf, "%i %lf %x %31[^ \n]", &n, &d, &x, str);
    if (i != 4) {
      break;
    }
    printf("%06i,%5.2f,%#010x,%s!\n", n, d, x, str);
    
  }
}
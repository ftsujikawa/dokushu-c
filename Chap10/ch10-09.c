#include <stdio.h>

int main(void) {
  char tmp[15];
  int ret = scanf("%14[abcdef]", tmp);
  printf("read %i values\n", ret);
  if (ret) {
    puts(tmp);
  }
}
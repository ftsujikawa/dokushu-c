#include <stdio.h>

int main(void) {
  printf("this file is %s, this line is %i\n", __FILE__, __LINE__);
  printf("compile datetime %s %s\n", __DATE__, __TIME__);
  printf("standard C version = %li\n", __STDC_VERSION__);
}
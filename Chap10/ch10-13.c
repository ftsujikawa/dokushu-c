#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void) {
  FILE *fp = fopen("append-test.txt", "a");
  if (!fp) {
    puts(strerror(errno));
    return 2;
  }
  fputs("new line\n", fp);
  fclose(fp);
}
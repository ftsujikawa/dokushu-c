#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *fp = NULL;
  int ch = '\0';
  if (argc >= 2) {
    fp = fopen(argv[1], "r");
    if (!fp) {
      fprintf(stderr, "%s\n", strerror(errno));
      return 1;
    }
  }
  else {
    fp = stdin;
  }
  while ((ch = fgetc(fp)) != EOF) {
    if (putchar(ch) == EOF) {
      fprintf(stderr, "%s\n", strerror(errno));
      fclose(fp);
      return 1;
    }
  }
  fclose(fp);
}
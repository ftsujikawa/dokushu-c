#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
  int ch;
  FILE *fp = fopen("all_a.txt", "rw+");
  if (fp) {
    size_t cnt = 0;
    while ((ch = fgetc(fp)) != EOF) {
      if (cnt == 8 || cnt == 16 || cnt == 32 || cnt == 64) {
        fseek(fp, -1, SEEK_CUR);
        fputc(toupper(ch), fp);
      }
      cnt++;
    }
    fclose(fp);
  }
}
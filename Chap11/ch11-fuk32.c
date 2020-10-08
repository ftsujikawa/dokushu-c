#include <stdio.h>

int main(void) {
  FILE *fp = fopen("1K.data", "wb");
  if (fp) {
    for (int i = 31; i <= 1000; i += 32) {
      fseek(fp, i, SEEK_SET);
      fputc('A', fp);
    }
    fclose(fp);
  }
}
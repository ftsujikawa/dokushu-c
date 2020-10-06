#include <stdio.h>

int main(void) {
  FILE *fp = fopen("all_a.txt", "w");
  if (fp) {
    for (int i = 0; i < 128; i++) {
      fputc('a', fp);
    }
    fclose(fp);
  }
}
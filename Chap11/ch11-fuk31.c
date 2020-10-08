#include <stdio.h>

int main(void) {
  FILE *fp = fopen("1K.data", "wb");
  if (fp) {
    fseek(fp, 999, SEEK_SET);
    char c = 0;
    fwrite(&c, sizeof(c), 1, fp);
    /*char str[1000] = { '\0' };
    fwrite(str, sizeof(str), 1, fp);*/
    fclose(fp);
  }
  else {
    return 1;
  }
}
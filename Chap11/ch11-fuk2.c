#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = 0;
  if (argc >= 2) {
    n = atoi(argv[1]) + 10;
  }
  else {
    FILE *fp = fopen("last-result.data", "rb");
    if (fp) {
      fread(&n, sizeof(n), 1, fp);
      fclose(fp);
      n += 10;
    }
    else {
      n = 10;
    }
  }
  printf("%i\n", n);
  FILE *fp = fopen("last-result.data", "wb");
  if (fp) {
    fwrite(&n, sizeof(n), 1, fp);
    fclose(fp);
  }
}
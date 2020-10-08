#include <stdio.h>

int main(void) {
  FILE *fp = fopen("1K.data", "rb");
  if (fp) {
    char buf[1000];
    fread(buf, sizeof(buf), 1, fp);
    printf("0--1--2--3--4--5--6--7--8--9--A--B--C--D--E--F-\n");
    for (int i = 0; i < 1000; i += 16) {
      for (int j = 0; j < 16 && i + j < 1000; ++j) {
        printf("%-03.2x", buf[i + j]);
      }
      puts("");
    }
    fclose(fp);
  }
}
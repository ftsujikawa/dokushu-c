#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    puts("作成するファイルサイズを指定してください。");
    return 1;
  }
  long offset = atoi(argv[1]);
  FILE *fp = fopen("testfile.data", "wb");
  if (!fp) {
    puts(strerror(errno));
    return 2;
  }
  fseek(fp, offset - 1, SEEK_SET);
  fputc('\0', fp);
  printf("現在のファイル位置は%liです。\n", ftell(fp));
  fclose(fp);
}
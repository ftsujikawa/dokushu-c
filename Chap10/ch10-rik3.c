#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *src;
  FILE *dest;
  if (argc == 3) {
    src = fopen(argv[1], "r");
    if (!src) {
      fprintf(stderr, "%s\n", strerror(errno));
      return 1;
    }
    dest = fopen(argv[2], "w");
    if (!dest) {
      fprintf(stderr, "%s\n", strerror(errno));
      return 1;
    }
  }
  else if (argc == 2) {
    src = fopen(argv[1], "r");
    if (!src)
    {
      fprintf(stderr, "%s\n", strerror(errno));
      return 1;
    }
    dest = stdout;
  }
  char buf[128] = { '\0' };
  int kou;
  char name[32];
  char ken[32];
  int jin;
  int flag = 0;
  while (fgets(buf, sizeof(buf), src) != NULL) {
    int n = sscanf(buf, "%i,%31[^,],%31[^,],%i", &kou, name, ken, &jin);
    if (n != 4) {
      fprintf(dest, "項番 都道府県 人口\n");
    }
    else {
      fprintf(dest, "%4i %-8s %8i\n", kou, name, jin);
    }
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct emp {
  char name[32];
  int born;
  int died;
} EMP;
#define INT_SIZE 4
#define INC_SIZE 4

int main(void) {
  FILE *fin = fopen("ch11-10.data", "r");
  if (!fin) {
    fprintf(stderr, "open error: %s\n", strerror(errno));
    return 2;
  }
  EMP *emps = malloc(sizeof(EMP) * INT_SIZE);
  size_t csize = INT_SIZE;
  size_t last = 0;
  for (;;) {
    int ret = fscanf(fin, "%*i,%31[^,],%i,%i", emps[last].name, &emps[last].born, &emps[last].died);
    if (ret == EOF) {
      break;
    }
    last++;
    if (last == csize) {
      EMP *nemps = realloc(emps, sizeof(EMP) * (csize + INC_SIZE));
      if (!nemps) {
        fprintf(stderr, "no memory, use only %zu emps\n", csize);
        break;
      }
      else {
        emps = nemps;
        csize += INC_SIZE;
      }
    }
  }
  fclose(fin);
  for (size_t i = 0; i < last; i++) {
    printf("%s %i-%i\n", emps[i].name, emps[i].born, emps[i].died);
  }
  free(emps);
}
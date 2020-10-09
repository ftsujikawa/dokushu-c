#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct emp {
  int born;
  int died;
  char name[];
} EMP;
#define INT_SIZE 4
#define INC_SIZE 4

int main(void) {
  char name[32];
  int born;
  int died;

  FILE *fin = fopen("ch11-10.data", "r");
  if (!fin) {
    fprintf(stderr, "open error: %s\n", strerror(errno));
    return 2;
  }
  EMP **emps = malloc(sizeof(EMP *) * INT_SIZE);
  size_t csize = INT_SIZE;
  size_t last = 0;
  for (;;) {
    int ret = fscanf(fin, "%*i,%31[^,],%i,%i", name, &born, &died);
    if (ret == EOF) {
      break;
    }

    EMP *p = malloc(sizeof(EMP) + strlen(name) + 1);
    if (!p) {
      fprintf(stderr, "no memory for %s\n", strerror(errno));
    }
    emps[last++] = p;
    strcpy(p->name, name);
    p->born = born;
    p->died = died;

    if (last == csize) {
      EMP **nemps = realloc(emps, sizeof(EMP *) * (csize + INC_SIZE));
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
    printf("%s %i-%i\n", emps[i]->name, emps[i]->born, emps[i]->died);
  }
  for (size_t i = 0; i < last; i++) {
    free(emps[i]);
  }
  free(emps);
}
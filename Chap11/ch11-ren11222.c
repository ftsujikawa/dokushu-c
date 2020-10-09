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

int comp_name(const void *p0, const void *p1) {
  return strcmp((*(EMP **)p0)->name, (*(EMP **)p1)->name);
}

int comp_born(const void *p0, const void *p1) {
  return (*(EMP **)p0)->born - (*(EMP **)p1)->born;
}

int comp_died(const void *p0, const void *p1) {
  return (*(EMP **)p0)->died - (*(EMP **)p1)->died;
}

int main(int argc, char *argv[]) {
  char name[32];
  int born;
  int died;
  int (*comp)(const void *, const void *) = comp_name;

  if (argc >= 2) {
    if (!strcmp(argv[1], "1")) {
      comp = comp_born;
    }
    else if (!strcmp(argv[1], "2")) {
      comp = comp_died;
    }
  }

  FILE *fin = fopen("ch11-10.data", "r");
  if (!fin)
  {
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

  qsort(emps, last, sizeof(EMP *), comp);

  for (size_t i = 0; i < last; i++) {
    printf("%s %i-%i\n", emps[i]->name, emps[i]->born, emps[i]->died);
  }
  for (size_t i = 0; i < last; i++) {
    free(emps[i]);
  }
  free(emps);
}
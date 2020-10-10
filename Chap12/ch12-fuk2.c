#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct {
  int argc;
  char *argv[];
} ARG;

void print_arg(ARG *arg) {
  for (int i = 0; i < arg->argc; i++) {
    printf("%s\n", arg->argv[i]);
  }
}

int main(int argc, char *argv[]) {
  ARG *pa;
  pa = malloc(sizeof(ARG) + sizeof(char *) * argc);
  if (!pa) {
    fprintf(stderr, "no memroy for %s\n", strerror(errno));
    return 1;
  }
  pa->argc = argc;
  for (int i = 0; i < argc; i++) {
    pa->argv[i] = malloc(strlen(argv[i]) + 1);
    if (!pa->argv[i]) {
      fprintf(stderr, "no memroy for %s\n", strerror(errno));
      break;
    }
    strcpy(pa->argv[i], argv[i]);
  }
  print_arg(pa);
  for (int i = 0; i < argc; i++) {
    free(pa->argv[i]);
  }
  free(pa);
}
#include <stdio.h>

int main(void) {
  int32_t (*a)(int32_t, int32_t, int32_t);
  double (ab)(double, double);
  char *(*c)(char *, char *, char *);
  int (*d)(int, char *[]);
  void (*e)(char, char *, int[]);
  int (*f)(int (*)(int, int), int (*)(int, int));
}
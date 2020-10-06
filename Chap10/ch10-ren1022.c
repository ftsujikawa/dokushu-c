#include <stdio.h>

int main(void) {
  int a, b, c;
  a = b = c = 0;
  int ret = scanf("%i %i %i", &a, &b, &c);
  if (ret == 0) {
    fprintf(stderr, "不正な入力です。\n");
  }
  else if (ret == 3) {
    printf("%i", a + b + c);
  }
  else {
    fprintf(stderr, "%i個の合計は%iです。", ret, a + b + c);
  }
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define BUFSIZE 256

static bool isnum(char *p) {
  bool ret = false;
  for (size_t i = 0; i < strlen(p); i++) {
    if (isdigit(p[i])) {
      ret = true;
    }
    else {
      ret = false;
      break;
    }
  }
  return ret;
}

int main(void) {
  char buf[BUFSIZE];
  int ch;

  int i = 0;
  int total = 0;
  int res = 0;
  char *pos = buf;
  while ((ch = getchar()) != EOF) {
    if (ch == ' ' || ch == '\n') {
      buf[i] = '\0';
      if (isnum(pos)) {
        total += atoi(pos);
        res++;
        pos = buf + i + 1;
        ++i;
      }
      if (ch == '\n') {
        break;
      }
    }
    else {
      buf[i++] = ch;
    }
    if (i >= BUFSIZE - 1) {
      break;
    }
  }
  if (res == 0) {
    fprintf(stderr, "不正な入力です。\n");
  }
  else if (res < 3) {
    fprintf(stderr, "%i個の合計は%iです。\n", res, total);
  }
  else {
    fprintf(stdout, "%i", total);
  }
}
*/
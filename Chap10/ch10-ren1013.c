#include <stdio.h>

int main(void) {
  int n1, n2;
  char name[32];
  for (;;) {
    int ret = scanf("%*i,%31[^,],%i,%i", name, &n1, &n2);
    if (ret == EOF) {
      break;
    }
    printf("%-11s,%4i-%4i\n", name, n1, n2);
  }
}
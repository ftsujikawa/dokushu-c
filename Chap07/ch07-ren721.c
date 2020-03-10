#include <stdio.h>

int main(void) {
  char a[] = "This is a string.";
  int len = 0;
  for (int i = 0; a[i] != '\0'; ++i) {
    len++;
  }
  printf("%i\n", len);
}
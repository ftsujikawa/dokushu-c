#include <stdio.h>
#include <uchar.h>
#include <locale.h>

int main(void) {
  setlocale(LC_CTYPE, "ja");
  printf("%ls\n", L"日本");
}
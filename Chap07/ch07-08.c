#include <stdio.h>
#include <uchar.h>
#include <locale.h>

int main(void) {
  setlocale(LC_CTYPE, "ja");
  wchar_t japan[3];
  japan[0] = L'日';
  japan[1] = L'本';
  japan[2] = L'\0';
  printf("%ls\n", japan);
}
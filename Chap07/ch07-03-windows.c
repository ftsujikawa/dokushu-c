#include <stdio.h>
#include <uchar.h>
#include <locale.h>

int main(void) {
  setlocale(LC_CTYPE, "ja");
  wchar_t a = L'あ';
  char16_t a0 = u'あ';
  char32_t a1 = U'あ';
  printf("%lc\n", a);
}
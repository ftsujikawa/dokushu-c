#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_CTYPE, "ja");
  for (wchar_t i = L'\x306A'; i <= L'\x306E'; ++i) {
    printf("%lc\n", i);
  }
}
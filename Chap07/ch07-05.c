#include <stdio.h>
#include <ctype.h>

int main(void) {
  char c[] = { '1', 'a', 'B', ' ', '\n' };
  for (int i = 0; i < 5; i++) {
    printf("%c alnum=%i, alpha=%i, blank=%i, control=%i, digit=%i\n",
      c[i], isalnum(c[i]), isalpha(c[i]), isblank(c[i]), iscntrl(c[i]), isdigit(c[i]));
    if (islower(c[i])) {
      printf("%c => %c\n", c[i], toupper(c[i]));
    }
    else if (isupper(c[i])) {
      printf("%c => %c\n", c[i], tolower(c[i]));
    }
  }
}
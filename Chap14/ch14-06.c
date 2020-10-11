#include <stdio.h>

#define P(tmpl, ...) printf(tmpl, __VA_ARGS__)

int main(void) {
  P("%i, %i, %i\n", 1, 2, 3);
}
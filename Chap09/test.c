#include <stdio.h>

static void test(char *p) {
  puts(p);
}

int main(void) {
  test("test");
}
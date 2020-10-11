#include <stdio.h>

#define TEST

int main(void) {
#ifdef TEST
  puts("test is 1");
#endif
#undef TEST
#ifdef TEST
  puts("test is also here");
#endif
#define TEST 1
#if TEST == 1
  puts("test is 1");
#else
  puts("test is not 1");
#endif
}
#include <stdio.h>

int main(void) {
#if defined(A)
  #if defined(B)
    #if !defined(C)
  puts("no C");
    #else
  puts("with C");
    #endif
  #else
  puts("no B");
  #endif
  puts("no A");
#endif

#if !defined(A)
  puts("no A");
#elif !defined(B)
  puts("no B");
#elif !defined(C)
  puts("no C");
#else
  puts("with C");
#endif
}
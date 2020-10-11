#include <stdio.h>

#define sum(x, y, z) (x) + (y) + (z) //間違い
#define sum(x, y, z) (x + y + z)
#define do_greater_than(x, y, proc) if ((x) > (y)) (proc)()  // 間違い
#define do_greater_than(x, y, proc) do {\
  if (x > y) {\
    proc();\
    }\
  } while (0)

int main(void) {

}
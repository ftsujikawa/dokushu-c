#include <stdio.h>
#include <stdint.h>

int main(void) {
  struct {
    int16_t sval;
    int64_t lval;
    char cc[2];
    int32_t ival;
  } my_struct;
  printf("%zu, %zu\n", sizeof my_struct,
    sizeof my_struct.sval + sizeof my_struct.lval
    + sizeof my_struct.cc + sizeof my_struct.ival);
}
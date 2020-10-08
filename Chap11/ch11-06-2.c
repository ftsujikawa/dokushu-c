#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int main(void) {
  typedef struct {
    int16_t sval;
    int64_t lval;
    char cc[2];
    int32_t ival;
  } MYS;
  MYS my_struct;
  printf("%zu, %zu\n", sizeof my_struct,
         sizeof my_struct.sval + sizeof my_struct.lval
         + sizeof my_struct.cc + sizeof my_struct.ival);
  printf("offset of sval=%zu\n", offsetof(MYS, sval));
  printf("offset of lval=%zu\n", offsetof(MYS, lval));
  printf("offset of   cc=%zu\n", offsetof(MYS, cc));
  printf("offset of ival=%zu\n", offsetof(MYS, ival));

  typedef struct {
    int32_t ival;
    int16_t sval;
    char cc[2];
    int64_t lval;
  } MYS2;
  MYS2 my_struct2;
  printf("%zu, %zu\n", sizeof my_struct2,
         sizeof my_struct2.sval + sizeof my_struct2.lval + sizeof my_struct2.cc + sizeof my_struct2.ival);
  printf("offset of ival=%zu\n", offsetof(MYS2, ival));
  printf("offset of sval=%zu\n", offsetof(MYS2, sval));
  printf("offset of   cc=%zu\n", offsetof(MYS2, cc));
  printf("offset of lval=%zu\n", offsetof(MYS2, lval));
}
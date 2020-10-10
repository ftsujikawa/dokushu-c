#include <stdio.h>
#include <stdint.h>

int main(void) {
  // (1)
  struct ch12q0 {
    int32_t i32;
    char *cp;
    char ch;
    int16_t fa[];
  };
  // (2)
  typedef struct {
    int32_t i32;
    char *cp;
    char ch;
    int16_t fa[];
  } CH12Q0;
  // (3)
  struct {
    int32_t i32;
    char *cp;
    char ch;
    int16_t fa[];
  } ch12q0;
}
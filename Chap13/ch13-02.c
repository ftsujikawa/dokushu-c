#include <stdio.h>

typedef enum {
  ONE = 1,
  TWO,
  THREE,
  ONE_AGAIN = 1,
  TWO_AGAIN,
  HUNDRED = 100,
  HUNDRED_ONE,
} NUMBERS;

int main(void) {
  printf("THREE:%i, TWO_AGAIN:%i, HUNDRED_ONE:%i\n", THREE, TWO_AGAIN, HUNDRED_ONE);
}
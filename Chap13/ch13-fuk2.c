#include <stdio.h>

struct person {
  int age;
  int experienced;
  union {
    char member_id[8];
    char *member_ptr;
  };
};

int main(void) {

}
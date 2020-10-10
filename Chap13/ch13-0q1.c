#include <stdio.h>
#include <stdbool.h>

struct person {
  int age;
  int experienced;
  union {
    char member_id[8];
    char *member_ptr;
  };
};

void print_person(struct person *p, bool use_id) {
  if (use_id) {
    printf("age:%i, experienced:%i, id:%s\n", p->age, p->experienced, p->member_id);
  }
  else {
    printf("age:%i, experienced:%i, name:%s\n", p->age, p->experienced, p->member_ptr);
  }
}

int main(void) {
  struct person p0 = { 24, 8, "Tako M" };
  print_person(&p0, true);
  struct person p1 = { 35, 1, .member_ptr = "Akiyama Jiro" };
  print_person(&p1, false);
}
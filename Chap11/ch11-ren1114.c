#include <stdio.h>
#include <stdlib.h>

typedef struct bin_node {
  int value;
  struct bin_node *less_equal;
  struct bin_node *bigger;
} BIN_NODE;

void set(BIN_NODE *src, BIN_NODE *dest) {
  if (src->value > dest->value) {
    if (dest->bigger) {
      set(src, dest->bigger);
    }
    else {
      dest->bigger = src;
    }
  }
  else {
    if (dest->less_equal) {
      set(src, dest->less_equal);
    }
    else {
      dest->less_equal = src;
    }
  }
}

void print(BIN_NODE *bn) {
  if (bn) {
    print(bn->less_equal);
    printf("%i ", bn->value);
    print(bn->bigger);
  }
}

int main(int argc, char *argv[]) {
  BIN_NODE nums[argc];
  nums[0].value = 0;
  nums[0].less_equal = nums[0].bigger = NULL;
  for (int i = 1; i < argc; i++) {
    nums[i].value = atoi(argv[i]);
    nums[i].less_equal = nums[i].bigger = NULL;
    set(&nums[i], &nums[0]);
  }
  print(nums[0].less_equal);
  print(nums[0].bigger);
  puts("");
}
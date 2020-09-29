#include <stdio.h>

typedef int INTARRAY[];

INTARRAY array_func(int n) {
  int a[n];
  return a;
}

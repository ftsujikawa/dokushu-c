#include <stdio.h>

int main(void) {
  // (1) ローカル変数の領域のアドレスを返却している。
  // (2)
  /*
  X* create_X(int x, int y) {
    X *p = malloc(sizeof(X));
    if (!p) {
      fprintf(stderr, "no memory for %s\n", strerror(errno));
      exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
  }
  */
 // (3)
 /* 
 X create_X(int x, int y) {
   X st = { x, y };
   return st;
 }
 */
}
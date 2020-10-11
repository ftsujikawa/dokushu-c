#include <stdio.h>

#define VP(x1, x2, x3, x4, x5, x6); printf("%i, %i, %i\n", x1, x2, x3, (x4 + x5 + x6));
#define VP2(x1, x2, x3, x4, x5); printf(x1, x2, x3, x4, x5); // 間違い
#define VP2(x1, ...); printf(x1, __VA__ARGS__);
#define MOVE_PROPERTY(x1, x2, x3); x1 ## . ## x3 = x2 ## . ## x3; // 間違い
#define MOVE_PROPERTY(x1, x2, x3); x1.x3 = x2.x3
#define SAVE_STRUCT(x1, x2); x1 x2 ## _save = x2;

int main(void) {

}
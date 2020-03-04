#include <stdio.h>

int main(void) {
    int a0[][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    int a1[][2][3] = { 1,2,3,4,5,6,7,8,9,10,11,12};
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            for (int z = 0; z < 4; z++) {
                printf("a0(%i, %i, %i) = %i\n", x, y, z, a0[x][y][z]);
                printf("a1(%i, %i, %i) = %i\n", x, y, z, a1[x][y][z]);
            }
        }
    }
}
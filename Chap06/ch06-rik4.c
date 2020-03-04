#include <stdio.h>

int main(void) {
    int m[2][3] = {{1,2,3},{4,5,6}};
    int x = 0;
    do {
        int y = 0;
        while (y < 3) {
            printf("%d\n", m[x][y]);
            y++;
        }
        x++;
    } while (x < 2);
}
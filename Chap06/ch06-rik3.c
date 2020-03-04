#include <stdio.h>

int main(void) {
    int m[2][3];
    int cnt = 1;
    for (int x = 0; x < 2; ++x) {
        for (int y = 0; y < 3; ++y) {
            m[x][y] = cnt++;
        }
    }
    int x = 0;
    do {
        int y = 0;
        while (y < 3) {
            printf("%d\n", m[x][y++]);
            //y++;
        }
        //x++;
    } while (++x < 2);
}
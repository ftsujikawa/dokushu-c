#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0, j = 9; i < 10; ++i, --j) {
        a[i] = j;
    }
    return 0;
}
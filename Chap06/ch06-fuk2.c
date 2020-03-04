#include <stdio.h>

int main(void) {
    int a[10];

    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            a[i] = i * 2;
        }
        else {
            a[i] = i * 10;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%i\n", a[i]);
    }
}
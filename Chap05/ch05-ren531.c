#include <stdio.h>

int main(void) {
    int value = 1;
    for (;;) {
        value += value * 2;
        if (value < 0) {
            printf("%i\n", value);
            break;
        }
    }
}
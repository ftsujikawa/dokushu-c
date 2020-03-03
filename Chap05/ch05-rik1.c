#include <stdio.h>

int main(void) {
    for (int i = 30; i < 80; i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0
            || i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0
            || i % 23 == 0 || i % 27 == 0 || i % 29 == 0) {
            ;
        }
        else {
            printf("%i\n", i);
        }
    }
}
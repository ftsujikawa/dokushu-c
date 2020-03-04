#include <stdio.h>

int main(void) {
    for (int n = 1; n <= 10; ++n) {
        printf("%i\n", n);
    }

    int n = 0;
    while (n++ < 10) {
        printf("%i\n", n);
    }

    n = 1;
    do {
        printf("%i\n", n);
    } while (n++ < 10);
}
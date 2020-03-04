#include <stdio.h>

int main(void) {
    for (int n = 9; n >= 0; n--) {
        printf("%i\n", n);
    }

    int n = 10;
    while (--n >= 0) {
        printf("%i\n", n);
    }

    n = 9;
    do {
        printf("%i\n", n);
    } while (n-- > 0);
}
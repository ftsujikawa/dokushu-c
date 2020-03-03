#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 30; ++i) {
        if (i % 6 == 0) {
            continue;
        }
        printf("%i\n", i);
    }
}
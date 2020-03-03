#include <stdio.h>

int main(void) {
    for (int i = 1; i < 50; ++i) {
        if (i % 15 == 0) {
            puts("FizzBuzz");
            continue;
        }
        if (i % 3 == 0) {
            puts("Fizz");
            continue;
        }
        if (i % 5 == 0) {
            puts("Buzz");
            continue;
        }
        printf("%i\n", i);
    }
}
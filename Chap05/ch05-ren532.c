#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int value = INT_MAX;
    for (int i = 1; i < argc; ++i) {
        int n = atoi(argv[i]);
        if (n == 0) {
            puts("divisor is 0");
            return 0;
        }
        value /= n;
    }
    printf("%i\n", value);
}
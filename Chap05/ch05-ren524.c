#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("usage: %s number\n", argv[0]);
    }
    else {
        int n = atoi(argv[1]);
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        printf("%i ", sum);
        for (int i = 1; i <= n; ++i) {
            printf("%i", i);
            if (i < n) {
                printf(" + ");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        puts("no arguments");
        return 1;
    }

    long long result = 1;
    for (int i = 1; i < argc; ++i) {
        int n = atoi(argv[i]);
        if (n == 0) {   // 間違い：nが0のときの対応が必要
            continue;
        }
        if (result * n > INT_MAX) {
            printf("overflow! %lli\n", result);
            break;
        }
        result *= n;
    }
    printf("%lli\n", result);
}
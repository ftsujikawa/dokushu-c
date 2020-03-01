#include <stdio.h>
#include <stdbool.h>

bool odd(int n) {
    return n % 2 == 1;
}

int main(int argc, char *argv[]) {
    if (odd(argc - 1)) {
        puts("odd");
    }
    else {
        puts("even");
    }
    return 0;
}
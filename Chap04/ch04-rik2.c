#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts("specify a number");
        return 0;
    }
    int n = atoi(argv[1]);
    if (n % 30 == 0) {
        puts("C");
    }
    else if (n % 10 == 0) {
        puts("A");
    }
    else if (n % 3 == 0) {
        puts("B");
    }
    else {
        puts("D");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts("specify a number");
        return 0;
    }
    int n = atoi(argv[1]);
    if (n > 20) {
        puts("too large");
    }
    else if (n <= 10) {
        puts("too small");
    }
    else if (n == 15) {
        puts("good");
    }
    else {
        puts("OK");
    }
}
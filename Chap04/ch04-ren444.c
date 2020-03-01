#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        puts("no arguments");
        return 1;
    }
    else {
        int n = atoi(argv[1]);
        if (n % 15 == 0)
        {
            puts("FizBaz");
        }
        else if (n % 3 == 0)
        {
            puts("Fiz");
        }
        else if (n % 5 == 0) {
            puts("Baz");
        }
        else {
            puts(argv[1]);
        }
    }
}
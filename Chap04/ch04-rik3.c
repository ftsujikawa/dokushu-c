#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts("specify a number");
        return 0;
    }
    int n = atoi(argv[1]);
    switch (n % 5) {
    case 0:
        puts("ZERO");
        break;
    case 1:
        puts("ONE");
        break;
    case 2:
        puts("TWO");
        break;
    case 3:
        puts("THREE");
        break;
    case 4:
        puts("FOUR");
        break;
//    default: //  間違い
//        puts("ZERO");
    }
}
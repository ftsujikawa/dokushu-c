#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 間違い
    if (argc == 2) {
        int n = atoi(argv[1]);
        if (n == 123) {
            puts("Bingo!");
        }
        else if (n > 123) {
            puts("greater");
        }
        else if (n < 123) {
            puts("less");
        }
    }
    else {
        puts("specify a number");
    }

    // 正解
    if (argc != 2) {
        puts("specify a number");
    }
    else {
        int n = atoi(argv[1]);
        if (n > 123)
        {
            puts("greater");
        }
        else if (n < 123)
        {
            puts("less");
        }
        else {
            puts("Bingo!");
        }
    }
}
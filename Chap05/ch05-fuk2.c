#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        puts("Hello World!");
    }
    else {
        puts(argv[1]);
    }
}
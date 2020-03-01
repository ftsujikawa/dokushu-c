#include <stdio.h>

int main(int argc, char *argv[]) {
    switch (argc) {
    case 1:
        puts("no argument!");
        break;
    case 2:
        puts("1 argeuments");
        break;
    case 3:
        puts("2 arguments");
        break;
    case 4:
    case 5:
        puts("many arguments");
        break;
    default:
        puts("too many arguments");
    }
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        return 1;
    }
    int n;
    switch (atoi(argv[1])) {
    case 0:
        n = atoi(argv[2]) + atoi(argv[3]);
        break;
    case 1:
        n = atoi(argv[2]) - atoi(argv[3]);
        break;
    case 2:
        n = atoi(argv[2]) * atoi(argv[3]);
        break;
    case 3:
        n = atoi(argv[2]) / atoi(argv[3]);
        break;
    default:
        puts("1st argument should be 0 to 3");
        return 2;
    }
    printf("%i\n", n);
    return 0;
}
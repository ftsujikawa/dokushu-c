#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool even(int n)
{
    return n % 2 == 0;
/*    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }*/
//    return n % 2 == 0 ? true : false;
}

int main(int argc, char *argv[]) {
    printf("%i\n", even(atoi(argv[1])));
    return 0;
}

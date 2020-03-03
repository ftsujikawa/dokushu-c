#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool found = false;
    for (int i = 0; i < 8; i++) {
        switch (i % 3) {
        case 0:
            puts("Fizz");
            break;
        case 1:
            puts("Fizz + 1");
            break;
        case 2:
            found = true;
            break;
        default:
            puts("bug! never come here");
            break;
        }
        if (found)
        {
            break;
        }
    }
    puts("end");
}
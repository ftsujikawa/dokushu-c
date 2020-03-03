#include <stdio.h>
#include <stdint.h>

int main(void) {
    int32_t i16 = 1, prev16 = 0;
    for (int i = 1; ; i++) {
        i16 *= i;
        if (i16 >= INT16_MAX) {
            printf("16bit = %i, last multiplier = %i\n", prev16, i - 1);
            break;
        }
        else {
            prev16 = i16;
        }
    }
    int64_t i32 = 1, prev32 = 0;
    for (int i = 1;; i++) {
        i32 *= i;
        if (i32 >= INT32_MAX) {
            printf("32bit = %li, last multiplier = %i\n", prev32, i - 1);
            break;
        }
        else {
            prev32 = i32;
        }
    }
}
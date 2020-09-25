#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
    int32_t array[] = { 1, 2, 3, 4 };
    int32_t *p = array;
    for (int i = 0; i < 4; i++) {
      printf("array[%i] = %i, &array[%i] = %p, p + %i = %p\n",
            i, array[i], i, &array[i], i, p + i);
    }
}
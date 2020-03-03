#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
#if defined(__STDC_NO_VLA__)
    puts("not supported");
#else
    int a[argc - 1];
    for (int i = 0; i < argc - 1; i++) {
        a[i] = atoi(argv[i + 1]);
    }
    for (int i = 0; i < argc - 1; i++) {
        printf("%i\n", a[i]);
    }
#endif
}
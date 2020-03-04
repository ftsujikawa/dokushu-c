#include <stdio.h>

int main(void) {
    int ch = '\n';
    int cnt = 0;
    do {
        ch = getchar();
        if (ch == '\n') {
            cnt++;
        }
        printf("%c", ch);
        if (cnt == 3) {
            break;
        }
    } while (ch != EOF);
}
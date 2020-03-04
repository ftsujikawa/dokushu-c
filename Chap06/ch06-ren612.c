#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("useage; %s file file\n", argv[0]);
        return -1;
    }
    FILE *fr = fopen(argv[1], "r");
    FILE *fw = fopen(argv[2], "w");
    char ch;
    while ((ch = fgetc(fr)) != EOF) {
        fputc(ch, fw);
    }
    fclose(fr);
    fclose(fw);
}
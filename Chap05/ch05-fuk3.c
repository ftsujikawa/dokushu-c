#include <stdio.h>

int main(int argc, char *argv[]) {
    //return argc >= 2 ? 0 : 1;// 間違い
    return argc == 1 ? 0 : 1; // 正解
}
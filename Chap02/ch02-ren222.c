/*
 * 最初のCプログラム
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {        //コマンドライン引数がない場合は以下を実行
    puts("hello world!"); //コンソールにhello worldを表示する
  }
  else {                  //コマンドライン引数が指定されている場合は以下を実行
    int sum = 0;
    // インデックス０は無視する
    for (int i = 1; i < argc; i++) {
      sum += atoi(argv[i]);
    }
    printf("sum = %d\n", sum);
  }
  return 0;
}
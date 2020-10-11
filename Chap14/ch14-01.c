#include <stdio.h>

int main(int argc, char *argv[]) {
#ifdef TEST
  char *magic = "test value";
#else
  if (argc != 2) {
    puts("引数を指定してください。");
    return 1;
  }
  char *magic = argv[1];
#endif
  printf("Hello %s\n", magic);
}
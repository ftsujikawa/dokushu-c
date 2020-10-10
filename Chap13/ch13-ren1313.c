#include <stdio.h>

typedef enum {
  未初期化,
  初期化済み,
  使用中,
  確定,
  削除済み
} STATUS;

STATUS check_status(STATUS);

int main(void) {

}
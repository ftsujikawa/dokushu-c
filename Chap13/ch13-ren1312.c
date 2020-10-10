#include <stdio.h>

enum {
  Zero,
  One,
  Two,
  Three,
} numbers;

typedef enum {
  Zero = 0,
  One = 1,
  Two = 2,
  Three = 3
} DIGITS;

int main(void) {
  DIGITS current_digit;
  // 列挙子名が重複している。
}
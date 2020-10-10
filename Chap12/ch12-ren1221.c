#include <stdio.h>
#include <stdbool.h>

typedef struct {
  bool eco:1;
  unsigned int shift:3;
  bool side:1;
  unsigned int rpm;
  int winker:2;
  unsigned int sw:3;
} CAR;

static char *SHIFT[] = { "P", "R", "N", "D", "L" };
static char *WINKER[] = { "左", "中", "右" };
static char *SW[] = { "停止", "電源ON", "エンジンON", "スターター" };

int main(void) {
  CAR car;
  char name[4];
  int eco, shift, side, winker, sw;

  for (;;) {
    int ret = scanf("%3[^.].{%i,%u,%i,%u,%i,%u}",
                name, &eco, &shift, &side, &car.rpm, &winker, &sw);
    if (ret == EOF) {
      break;
    }
    car.eco = eco;
    car.shift = shift;
    car.side = side;
    car.winker = winker;
    car.sw = sw;

    printf("エコモード:%s シフト位置:%s サイドブレーキ:%s エンジン回転数:%i ウィンカー位置:%s スイッチ:%s\n",
      car.eco ? "ON" : "OFF", SHIFT[car.shift], car.side ? "ON" : "OFF", car.rpm,
      WINKER[car.winker + 1], SW[car.sw]);
  }
}
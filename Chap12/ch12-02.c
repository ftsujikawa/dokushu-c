#include <stdio.h>
#include <stdbool.h>
#include <errno.h>
#include <string.h>

typedef struct {
  char account[6];
  char name[32];
  unsigned int sex:2;
  unsigned int occupation:3;
  unsigned int house:2;
  bool domestic:1;
  unsigned int income:2;
  char address[64];
} MEMBER;

static char *SEX[] = { "無回答", "女", "男", "無効" };
static char *OCCUPATION[] = { "学生", "会社員", "経営者", "自演業", "無職", "無効", "無効", "無効" };
static char *HOUSE[] = { "持ち家", "借家", "賃貸", "実家" };
static char *DOMESTIC[] = { "他国", "自国" };
static char *INCOME[] = { "500万円未満", "1000万円未満", "1000万円以上", "無効" };

void print_member(const MEMBER *mp) {
  printf("id:%s 名前:%s 性別:%s 職業:%s 住居:%s 国籍:%s 収入:%s 住所:%s\n",
          mp->account, mp->name, SEX[mp->sex], OCCUPATION[mp->occupation],
          HOUSE[mp->house], DOMESTIC[mp->domestic], INCOME[mp->income],
          mp->address);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: %s csv\n", argv[0]);
    return 1;
  }
  FILE *fin = fopen(argv[1], "r");
  if (!fin) {
    fprintf(stderr, "open error: %s\n", strerror(errno));
    return 2;
  }
  MEMBER member;
  for (;;) {
    int sex, occupation, house, domestic, income;
    int ret = fscanf(fin, "%5[^,],%31[^,],%i,%i,%i,%i,%i,%63[^\n]\n",
                      member.account, member.name,
                      &sex, &occupation, &house, &domestic, &income,
                      member.address);
    if (ret == EOF) {
      break;
    }
    member.sex = sex;
    member.occupation = occupation;
    member.house = house;
    member.domestic = domestic;
    member.income = income;
    print_member(&member);
  }
  fclose(fin);
}
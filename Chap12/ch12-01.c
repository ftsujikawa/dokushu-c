#include <stdio.h>
#include <stdint.h>

typedef struct {
  uint32_t key;
  char name[16];
  int age;
  char *address1;
  char *address2;
} DATA_ROW;

int main(void) {
  FILE *fin = fopen("ch12-01.data", "r");
  for (;;) {
    DATA_ROW row;
    char addrs1[32];
    char addrs2[32];
    int ret = fscanf(fin, "%i,%15[^,],%i,%31[^,],%31[^\n]\n", &row.key, row.name, &row.age, addrs1, addrs2);
    if (ret != 5) {
      break;
    }
    printf("key=%i,name=%s,age=%i\n", row.key, row.name, row.age);
  }
  fclose(fin);
}
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
  union {
    uint32_t key;
    char xkey[6];
  };
  char name[16];
  int age;
  char *address1;
  char *address2;
} DATA_ROW;

int main(int argc, char *argv[]) {
  bool use_xkey = (argc > 1);
  FILE *fin = fopen((use_xkey) ? "ch12-01-2.data" : "ch12-01.data", "r");
  for (;;) {
    DATA_ROW row;
    char addrs1[32];
    char addrs2[32];
    int ret;
    if (use_xkey) {
      ret = fscanf(fin, "%5s,%15[^,],%i,%31[^,],%31[^\n]\n", row.xkey, row.name, &row.age, addrs1, addrs2);
    }
    else {
      ret = fscanf(fin, "%i,%15[^,],%i,%31[^,],%31[^\n]\n", &row.key, row.name, &row.age, addrs1, addrs2);
    }
    if (ret != 5) {
      break;
    }
    if (use_xkey) {
      printf("key=%s,name=%s,age=%i\n", row.xkey, row.name, row.age);
    }
    else {
      printf("key=%i,name=%s,age=%i\n", row.key, row.name, row.age);
    }
  }
  fclose(fin);
}
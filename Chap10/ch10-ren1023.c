#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void) {
  char buffer[128];
  int n1, n2;
  char name[32];

  FILE *fp = fopen("test.txt", "r");
  if (fp) {
    while (fgets(buffer, sizeof(buffer), fp)) {
      int ret = sscanf(buffer, "%*i,%31[^,],%i,%i", name, &n1, &n2);
      if (ret != 3) {
        continue;
      }
      printf("%-11s,%4i-%4i\n", name, n1, n2);
    }
  }
  else {
    puts(strerror(errno));
  }
}
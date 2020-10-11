#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  if (!strcmp(argv[1], "-v")) {
    char m[4] = { '\0' };
    int d, y, i;
    char *mon[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    int ret = sscanf(__DATE__, "%s %i %i", m, &d, &y);

    for (i = 0; i < 12; i++) {
      if (strcmp(m, mon[i]) == 0) {
        break;
      }
    }
    printf("%4i/%02i/%02i %s\n", y, i + 1, d, __TIME__);
  }
}
#include <stdio.h>

int main(void) {
  struct cube {
    int width;
    int heigh;
    int depth;
  };
  typedef struct {
    char name[32];
    int name_length;
  } NAME;
  typedef struct {
    double latitude;
    double longitude;
    char *landmark;
  } GEOPOINT;
}
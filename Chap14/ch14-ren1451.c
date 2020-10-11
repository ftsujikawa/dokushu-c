#include <stdio.h>

// 不十分 #ifndef __STDC__
#if !defined(__STDC__) || __STDC__ != 1
#error("need standard C")
#endif

int main(void) {

}
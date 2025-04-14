// Let that bad pointer go wild upwards!
//
// Time-stamp: <File badpointer-up.c saved at 17:41:02 CET on Wednesday 2025-03-19, by janjoris on brooks.>

#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 1, b = 2, c = 3, d = 4, e = 5, i;
  int *p = &c;

  for (i = 0;;i++) {
    printf("i = %d, a = %d, b = %d, c = %d, d = %d, e = %d, *p = %d\n", i, a, b, c, d, e, *p);
    *(p++) = 0;
  }
  
  return EXIT_SUCCESS;
  
}

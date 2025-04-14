// Divide by zero!
//
// Time-stamp: <File baddivide.c saved at 18:24:00 CET on Wednesday 2025-03-19, by janjoris on brooks.>

#include <stdio.h>
#include <stdlib.h>

int main() {

  {
    float a = 1, b = 0, c;
    c = a / b;
    printf("%f / %f = %f\n", a, b, c);
  }

  {
    int a = 1, b = 0, c;
    c = a / b;
    printf("%d / %d = %d\n", a, b, c);
  }

  return EXIT_SUCCESS;

}

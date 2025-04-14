// Divide by zero!
//
// Time-stamp: <File ieee754.c saved at 18:38:40 CET on Wednesday 2025-03-19, by janjoris on brooks.>

#include <stdio.h>
#include <stdlib.h>

int main() {

  float a, b, c, d, e;

  a = 0;     // 0
  b = -a;    // -0
  c = 1 / a; // inf
  d = 1 / b; // -inf
  e = a / a; // -nan
    
  printf("a = %f, b = %f, c = %f, d = %f, e = %f\n\n", a, b, c, d, e);
  printf("1 / %f = %f\n", a, 1 / a);
  printf("1 / %f = %f\n", b, 1 / b);
  printf("1 / %f = %f\n", c, 1 / c);
  printf("1 / %f = %f\n", d, 1 / d);
  printf("%f / %f = %f\n", a, a, e); 
  printf("%f + %f = %f\n", c, d, c + d);
  printf("%f * %f = %f\n", a, c, a * c);
	 
  return EXIT_SUCCESS;

}

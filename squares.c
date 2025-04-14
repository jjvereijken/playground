#include <stdio.h>
#include <stdlib.h>

#define MAXLOOP 2000001

int main() {

  long int s = 0;
  long int a = 1;
  
  while (a < MAXLOOP) {
    printf("%ld\n", s);
    s += a; a += 2;
  }

  return EXIT_SUCCESS;

}

#include <stdio.h>
#include <stdlib.h>

#define MAXLOOP 2000001

int main() {

  long int a = 1, b = 1, c = 1, d = 1, e = 1, f = 0;
  
  while (a < MAXLOOP) {
    printf("%24ld %24ld %24ld\n", a, b, c);
    f += 6; e += f; d += 2; c += e; b += d; a++;
  }

  return EXIT_SUCCESS;

}

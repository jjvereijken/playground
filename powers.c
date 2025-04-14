#include <stdio.h>
#include <stdlib.h>

#define MAXLOOP 10001

int main() {

  signed long int a = 1, b = 1, c = 1, d = 1, e = 1, f = 1, g = 0, h = 1, i = 2, j = -12;
  
  while (a < MAXLOOP) {
    printf("%18ld %18ld %18ld %18ld\n", a, b, c, d);
    j += 24; i += j; h += i; g +=6; f += g; e += 2; d += h; c += f; b += e; a++;
  }

  return EXIT_SUCCESS;

}

#include <stdio.h>

#define DEBUG 0

unsigned int sum(unsigned int a, unsigned int b)  
{
  #if DEBUG
  printf("DEBUG: a = %08x, b = %08x\n", a, b);
  #endif
  do {
    a = a ^ b;         // a = carryless sum of a and b
    b = (~a & b) << 1; // b = carry of sum original of a and b (equivalent to b = ((a ^ b) & b) << 1)
    #if DEBUG
    printf("DEBUG: a = %08x, b = %08x\n", a, b);
    #endif
  } while (b);        // repeat till the carry is zero
  
  return a;
}

void calc(unsigned int a, unsigned int b)
{

  printf("START: a = %08x, b = %08x\n", a, b);
  printf("SUM:   a + b = %08x\n", sum(a, b));
  
  return;
}


int main(void)
{
  calc(0x00000000, 0x00000000);
  calc(0x00000001, 0x00000001);
  calc(0x00000003, 0x00000001);
  calc(0x00000007, 0x00000001);
  calc(0xaaaaaaaa, 0x55555555);
  calc(0x12345678, 0x87654321);
  calc(0x12345678, 0xdeadbeef - 0x12345678);
  calc(0x0defaced, 0x0defaced);
  calc(0xdeadbeef, 0xdeadbeef);
  calc(0xffffffff, 0x00000001);
  calc(0xffffffff, 0xffffffff);
  
  return 0;
}

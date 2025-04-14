#include <stdio.h>

#define LENGTH 8

int main(void)

{
  char s[LENGTH];

  printf("Enter a string: ");
  gets(s);
  printf("The string is: %s\n", s);

  return 0;

}
  

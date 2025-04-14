#include <stdio.h>

#define LENGTH 8

int main(void)

{
  char s[LENGTH];

  printf("Enter a string: ");
  if (fgets(s, sizeof(s), stdin) != NULL) {
    printf("The string is: %s\n", s);
  } else {
    printf("\nError!\n");
  }

  return 0;

}
  

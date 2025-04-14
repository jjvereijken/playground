#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  if (fork()) {
    printf("parent, pid = %d\n", (int)getpid());
  } else {
    printf("child,  pid = %d\n", (int)getpid());
  }
  
  return 0;
  
}

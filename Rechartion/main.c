#include <stdio.h>
#include <stdlib.h>

int main()
{

  char *n="tuhin";
  int i;
  for(i=0;*(n+i)!='\0';i++)
  printf("%c",*(n+i));
}

#include <stdio.h>
#include <stdlib.h>
int mystrlen(char x[])
{
  int i;
  for(i=0;x[i]!='\0';i++)
   {}
   return i;

}

int main()
{
    char a[200],b[200];
    gets(a);

    int l;
    l=mystrlen(a);
    printf("%d",l);
    return 0;
}

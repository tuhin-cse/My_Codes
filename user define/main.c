#include<stdio.h>

void sum(int n);
main()
{
    int a=5;
    printf("\n before function");
    sum(a);
    printf("\n after funcion");
}
void sum(int n)
{
   int s=0,i;
   for(i=1;i<=n;i++)
    {
     s=s+i;
     printf("\n the value of sum=%d",s);
    }
}

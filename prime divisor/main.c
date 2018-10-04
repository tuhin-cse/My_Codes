#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
     {
      int f=0;
      if(a%i==0)
        {
         for(j=2;j<i;j++)
           {
             if(i%j==0)
                f=1;
           }
           if(f==0)
           printf(" %d",i);
        }
     }
}

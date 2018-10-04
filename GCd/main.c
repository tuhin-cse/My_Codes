#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,g=0,t;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
      {
        if(a%i==0&&b%i==0)
         {
          t=i;
         }
         if(t>g)
          g=t;
      }
    printf("%d",g);
    return 0;
}

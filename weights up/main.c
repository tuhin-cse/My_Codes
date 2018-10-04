#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=0; ;i++)
     {
       if(a<=b)
         {
          a=a*3;
          b=b*2;
         }
       else
         break;
     }
    printf("%d",i);
}

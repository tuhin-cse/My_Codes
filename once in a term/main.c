#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i=5,j,k,a[6];
    scanf("%d",&l);
    while(l!=0)
    {
     a[i]=l%10;
     l=l/10;
     i--;
    }
    a[5]++;
    j=a[0]+a[2]+a[1];
    for( ; ; )
      {
       k=a[4]+a[5]+a[3];
       if(j==k)
         break;
       else
          {
          a[5]++;
          if(a[5]==10)
             {
              a[4]++;
              a[5]=0;
             }
          }
      }
    for(i=0;i<6;i++)
       printf("%d",a[i]);
    return 0;
}

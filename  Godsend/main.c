#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long l;
    scanf("%lld",&l);
    long a[l];
    int i,z,sum;
    for(i=0;i<l;i++)
        scanf("%lld",&a[i]);
    sum=a[0];
    for(i=1;i<l;i++)
    {
      while(sum%2!=0)
           {
               if(i>=l)
                   break;
               sum=sum+a[i];
               z=1;
               i++;
               if(sum%2==0)
               {
                  sum=0;
                  z=2;
                  break;
               }
           }
      while(sum%2==0)
           {
               if(i>=l)
                   break;
               sum=sum+a[i];
               z=2;
               i++;
               if(sum%2!=0)
               {
                  sum=0;
                  z=1;
                  break;
               }

           }
    }
    if(z==1)
        printf("First\n");
    else
        printf("Second\n");
    return 0;
}

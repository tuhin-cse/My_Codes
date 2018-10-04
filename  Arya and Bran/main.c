#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a=0,b=0,i,x;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a+=x;
        if(a>7)
        {
            b+=8;
            a-=8;
        }
        else
        {
            b+=a;
            a=0;
        }
        if(b>=k)
            {
               printf("%d",i);
               return 0;
            }
    }
    printf("-1");
    return 0;
}

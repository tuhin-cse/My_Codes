#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,n,i;
    scanf("%lld",&n);
    a=1;
    b=2;
    c=3;
    if(n==1)
         printf("%lld",a);
    if(n==2)
         printf("%lld %lld",a,b);
    if(n>=3)
         printf("%lld %lld %lld",a,b,c);
    for(i=1;i<=n-3;i++)
    {
        d=c*b-a*b;
        printf(" %lld",d);
        a=b;
        b=c;
        c=d;
    }
    return 0;
}

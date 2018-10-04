#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m,n,a,x,y;
    long double i,j;
    scanf("%lld %lld %lld",&m,&n,&a);
    i=(long double)m/a;
    x=i;
    if(i>x)
       x++;
    j=(long double)n/a;
       y=j;
    if(j>y)
       y++;
    printf("%llu",x*y);

}

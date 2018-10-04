#include<stdio.h>
main()
{
    int s=0,a=1,n;
    scanf("%d",&n);
    while(a<=n)
    {
        s=s+a*a;
        a++;
    }
    printf("%d",s);
}


#include<stdio.h>
main()
{
    int s=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        s=s+n;
        n=n-1;
    }
    printf("%d",s);
}

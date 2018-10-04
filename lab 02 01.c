#include<stdio.h>
main()
{
    int a,b,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
         b=a%10;
        a=a/10;

        s=s+b;
    }

    printf("%d",s);
}

#include<stdio.h>
main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(c=2*n-a;c>=a;c--)
        {
            printf(" ");
        }
        printf(" ");
        for(b=1;b<=a;b++)
        {
            printf(" %d",a);
        }
        printf("\n");
         for(b=1;b<=a;b++)
        {
            printf(" ");
        }


    }
}

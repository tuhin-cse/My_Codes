#include<stdio.h>
main()
{
    int a,b,c,n=7;
    for(a=1;a<=4;a++)
    {
        for(c=2*n-a;c>=a;c--)
        {
            printf(" ");
        }
        printf(" ");
        for(b=1;b<=a;b++)
        {
            printf(" *");
        }
        printf("\n");
         for(b=1;b<=a;b++)
        {
            printf(" ");
        }
    }
     for(a=3;a>0;a--)
    {
        for(c=2*n-(a+2);c>=a;c--)
        {
            printf(" ");
        }
        printf(" ");
        for(b=1;b<=a;b++)
        {
            printf(" *");
        }
        printf("\n");
         for(b=1;b<=a;b++)
        {
            printf(" ");
        }
    }
}

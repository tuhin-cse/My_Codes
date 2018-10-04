#include<stdio.h>
main()
{
    int a,b,c;
    for(a=1;a<=30;a++)
    {
        printf("*");
    }
    printf("\n");
    for(a=1;a<=30;a++)
    {
        printf("*");
    }
    printf("\n");
    for(a=27;a>0;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf(" ");
        }
        printf("**\n");
    }
}

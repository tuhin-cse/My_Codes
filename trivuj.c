#include<stdio.h>
main()
{
    int a,b,c;

     for(a=1;a<=20;a++)
    {
        for(c=20;c>a;c--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }  for(b=1;b<a;b++)
        {
            printf("*");
        }
        printf("\n");

    }
}

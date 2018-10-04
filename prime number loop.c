#include<stdio.h>
main()
{
    int a,b,c,d=0,s=0;
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    {
        for(c=2;c<b;c++)
        {
            if(b%c==0)
              d=1;
        }
        if(d==0)
        {
            s++;
           printf("%d ",b);
        }


        d=0;
    }
    printf("\ntotal prime number is %d",s);
}

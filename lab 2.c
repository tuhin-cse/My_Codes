#include <stdio.h>
main()
{
    double a,b,c,d,e,f,t;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
   if(a<(b+c))
    printf("Valid");
   else
    printf("Invalid");

    return 0;
}


#include<stdio.h>
main()
{
    double a,b,s;
    scanf("%lf",&a);
    if(a>500)
    {
        s=a*.125;
        b=a-s;
    }
    else if(a>=301)
    {
        s=a*.11;
        b=a-s;
    }
    else if (a>=201)
    {
        s=a*.075;
        b=a-s;
    }

   else if (a>=101)
    {
        s=a*.05;
        b=a-s;
    }
    else  if (a>=0)
    {
        s=b;
        b=a-s;
    }
     printf("%.2lf\n",b);
    return 0;

}


#include <stdio.h>
#include <stdlib.h>

main()
{
    double a,b;
    int c;
    char d='%';
    scanf("%lf",&a);
    if(a>=2000.01)
    {
        b=a*.04;
        a=a+b;
        c=4;
    }
   else if(a>=1200.01)
    {
        b=a*.07;
        a=a+b;
        c=7;
    }
   else if(a>=800.01)
    {
        b=a*.10;
        a=a+b;
        c=10;
    }
   else if(a>=400.01)
    {
        b=a*.12;
        a=a+b;
        c=12;
    }
    else if(a>0)
    {
        b=a*.15;
        a=a+b;
        c=15;
    }
    printf("Novo salario: %.2lf\n",a);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: %d %c\n",c,d);
    return 0;
}




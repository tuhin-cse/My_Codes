#include <stdio.h>
#include <stdlib.h>

main()
{
    float a,b,c,d,e,f;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    scanf("%f",&a);
   if(a>=50)
    {
        a=a-50;
        b=50;
        if(a>=100)
         {
           a=a-100;
            c=100;
            if(a>=100)
            {
             a=a-100;
             d=100;
             }
             if(a>1)
             {
                 e=a;
                 a=0;
             }

        }

    }
    f=(a*.50+b*0.50+c*0.75+d*1.20+e*1.5)*1.2;
printf("BDT %.2f",f);


}

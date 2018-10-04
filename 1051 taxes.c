#include<stdio.h>
main()
{
    double a,b,c,d,s;
    scanf("%lf",&a);
    b=1000.00*.08;
    c=1000.00*.18;
    if(a>=0.00&&a<=2000.00)
    {
        printf("Isento\n");
    }
    if(a>45000.00)
    {
        d=a-4500.00;
        s=b+c+d*.28;
        printf("R$ %.2lf\n",s);
    }
    if(a>=3000.01&&a<4500.00)
    {
        d=a-3000.00;
        s=b+d*.18;
        printf("R$ %.2lf\n",s);
    }
    if (a>=2000.01&&a<=3000.00)
    {
        d=a-2000.00;
        s=d*.18;
        printf("R$ %.2lf\n",s);
    }
    return 0;

}

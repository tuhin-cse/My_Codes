#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&a);
    b=a/100;
    c=(a-b*100)/50;
    d=(a-b*100)%50;
    e=d/20;
    f=(d-e*20)/10;
    g=(d-e*20)%10;
    h=g/5;
    i=(g-5*h)/2;
    j=(g-5*h)%2;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,c,e,f,h,i,j);
    return 0;
}

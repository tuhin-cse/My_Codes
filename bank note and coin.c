#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
    float x;
    scanf("%f",&x);
    a=x;
    b=a/100;
    c=(a-b*100)/50;
    d=(a-b*100)%50;
    e=d/20;
    f=(d-e*20)/10;
    g=(d-e*20)%10;
    h=g/5;
    i=(g-5*h)/2;
    j=(g-5*h)%2;
    k=(x*100-a*100);
    l=k/50;
    m=(k-l*50)/25;
    n=(k-l*50)%25;
    o=n/10;
    p=(n-o*10)/5;
    q=(n-o*10)%5;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",b,c,e,f,h,i,j,l,m,o,p,q);
return 0;
}

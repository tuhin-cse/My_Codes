#include<stdio.h>
main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for (i=2;i<a;i++)
    {
        if(a%i==0)
            b++;
    }
    printf("%d",b);

}

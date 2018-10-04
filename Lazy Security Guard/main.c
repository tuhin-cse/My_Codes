#include <stdio.h>
#include <math.h>

int main()
{
    int a,p;
    scanf("%d",&a);
    int i,j;
    for(i=1; ;i++)
        for(j=1;j<=i;j++)
        {
            if(i*j>=a)
            {
             float x=4*sqrt(i*j);
             p=x;
             if(x!=p)
                p++;
             printf("%d",p);
             return;
            }
        }
    return 0;
}

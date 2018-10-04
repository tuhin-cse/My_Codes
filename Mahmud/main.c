#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    int sum =0;
    while(a!=0)
    {
        int z=a%10;
        sum+=z;
        a/=10;
    }
    printf("%d",sum);
}

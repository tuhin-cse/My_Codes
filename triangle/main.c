#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>>b && b>>c)
    {
        printf("%d",b);

    }
    if (b>>a && a>>c)
    {
        printf("%d",a);
    }
    else {printf("%d",c);}
    return 0;
}

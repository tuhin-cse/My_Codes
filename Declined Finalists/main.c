#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l,h=25;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>25&&x>h)
            h=x;

    }
    printf("%d",(h-25));
    return 0;
}

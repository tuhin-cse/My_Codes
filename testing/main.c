#include <stdio.h>
#include <stdlib.h>

float main()
{
    int x=10,y=10;
    printf("%d %d %d",x+y++,x+++y,++y);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},*p;
    p=&a[0][0];
    int r,e;
    scanf("%d %d",&r,&e);
    printf("%d",*(p+3*(r-1)+e-1));
    return 0;
}

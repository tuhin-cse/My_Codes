#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p[5][4],a[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    p[0][0]=&a[0][0];
    p[0][1]=&a[0][1];
   printf("%u %u",p[0][0],p[0][1]);
    return 0;
}

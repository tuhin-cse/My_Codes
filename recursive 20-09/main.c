#include <stdio.h>
#include <stdlib.h>

void fib(int a,int b,int c,int i)
{

    int temp;
    temp=b;
    b=a+b;
    a=temp;
    printf("%d ",a);
    c++;
    if(c<i)
       fib(a,b,c,i);



}


int main()
{

    int a=0,b=1,i;

    scanf("%d",&i);

    fib(0,1,0,i);

    return 0;
}

#include <stdio.h>


///Solution for problem 01
///Name: MD. A. Razzak
///ID : 170214

int isPrime(int *a)
{
    int b=*a,i;
    if(b==1)
        return 0;
    else
    {
        for (i=2;i<b;i++)
            if(b%i==0)
                return 0;
        return 1;
    }

}


void f1(int *a[],int x)
{
    int i,b=0;
    for(i=0;i<x;i++)
    {
        int *y=a[i];
        int p=isPrime(y);
        if(p==1)
            if(b<*a[i])
                b=*a[i];
    }
    printf("%d",b);

}


int main() {
    int i,z;
    scanf("%d",&i);

    int *x[i],y[5];
    for(z=0;z<i;z++)
    {

        scanf("%d",&y[z]);
        x[z]=&y[z];

    }
    f1(x,i);

}

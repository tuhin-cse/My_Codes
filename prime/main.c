#include<stdio.h>

int prime(int i)
{
    if(i==1)
    {
             return 0;
    }
    int n;
    for(n=2;n<i;n++)
    {
        if(i%n==0)
            {
             return 0;
            }
    }
    return 1;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       int x= prime(i);
       if(x==1)
         printf("%d is prime\n",i);
       else
          printf("%d is not prime\n",i);

    }
}


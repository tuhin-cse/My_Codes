#include<stdio.h>

int prime(int i)
{
    int n,k=0;
    for(n=2;n<i;n++)
    {
        if(i%n==0)
            {
              k=1;
              break;
            }
    }
    if(k==1)
       printf("%d is not prime\n",i);
    else
       printf("%d is prime\n",i);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n>1)
         printf("1 is not prime\n");
    for(i=2;i<=n;i++)
        prime(i);
}


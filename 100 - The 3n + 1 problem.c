#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    while(n!=1)
    {
      if(n%2!=0)
        {
        n=(3*n)+1;
        printf(" %d",n);
        }
    else
        printf(" %d",(n=n/2));
    }
}

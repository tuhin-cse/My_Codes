#include<stdio.h>
main()
{
    int i,j,n,c,l=0;
    scanf("%d %d",&i,&j);
    for(n=i;n<=j;n++)
    {
        c=0;
        while(n!=1);
        {
        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;
            c++;
          }
        if(l<c)
        {
         l=c;
        }
    }

    printf("%d",l);
}

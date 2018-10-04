#include<stdio.h>
int main()
{
  int i,j,n,v,m;
  scanf("%d",&n);
  for(i=5,j=0;i<=n;i+5*j)
      {
        if(n<i)
           n=n-i;
        else
          v=i;

      }
    m=i%v;
    printf("%d",m);


}



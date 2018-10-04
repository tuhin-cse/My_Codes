#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[200],i=0,j,l=0,x,y;
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
     b[i]=a%10;
     l++;
     a=a/10;
     i++;
    }
    int k=1;
    y=0;
    for(j=0;j<l;j++)
     {
      y=y+k*b[l-(j+1)];
      k=k*10;
     }
     if(x==y)
     printf("Palindrome");
    else
     printf("Not Palindrome");
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,n;
  float a;
  scanf("%d",&n);
  for(i=5; ;i*=2)
      {
        if(n>i)
           n=n-i;
        else
           break;
        }
    j=i/5;
    a=(float)n/j;
    if(a>0&&a<=1)
        printf("Sheldon");
    else if(a<=2)
        printf("Leonard");
    else if(a<=3)
        printf("Penny");
    else if(a<=4)
        printf("Rajesh");
    else
        printf("Howard");
}

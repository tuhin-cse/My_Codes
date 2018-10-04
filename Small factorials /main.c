#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[500]={0},i,j,n,temp,len,x,z;
    scanf("%d",&n);
    int p[n];
    for(z=0;z<n;z++)
          scanf("%d",&p[z]);

    for(z=0;z<n;z++)
    {
    len=1;
    temp=0;
    a[0]=1;
    for(i=1;i<=p[z];i++)
    {
     for(j=0;j<len;j++)
     {
        x=a[j]*i+temp;
        a[j]=x%10;
        temp=x/10;

     }
      while(temp)
          {
            a[len]=temp%10;
            temp=temp/10;
            len++;
          }

    }
    for(i=len-1;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");

    }
    return 0;
}

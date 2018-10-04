#include<stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    int a[l],i=l,j=l-1,temp;
    while(i--)
    {
     scanf("%d",&a[i-1]);
    }
    i=l;
     while(i--)
    {
       while(j--)
        if(a[i-1]>a[j-1])
        {
            temp=a[i-1];
            a[i-1]=a[j-1];
            a[j-1]=temp;
        }

    }
     i=l;
     while(i--)
    {
     printf("%d\n",a[i-1]);
    }
}

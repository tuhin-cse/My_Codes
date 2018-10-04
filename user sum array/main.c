#include<stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    int a[l],i=l,j,temp;
    while(i--)
    {
     scanf("%d",&a[i]);
    }
    i=l;
     while(i--)
    {
       j=i;
       while(j--)
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
     i=l;
     while(i--)
    {
     printf("%d\n",a[i]);
    }
}

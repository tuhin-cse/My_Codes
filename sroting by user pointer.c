#include<stdio.h>
void sort(int a[],int *b[],int l)
{
  int i,temp,j;
 for(i=0;i<l;i++)
    {
       for(j=i+1;j<l;j++)
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
   for(i=0;i<l;i++)
       b[i]=&a[i];

}
int main()
{
    int l;
    scanf("%d",&l);
    int a[l],*b[l],i,j,temp;
    for (i=0;i<l;i++)
    {
     scanf("%d",&a[i]);
    }
    sort(a,&b,l);
     for (i=0;i<l;i++)
    {
     printf("%d\n",*b[i]);
    }
}

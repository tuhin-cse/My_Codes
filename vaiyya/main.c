#include<stdio.h>
sort();
int main()
{
    int a[10],b[10],i;
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    b[]=sort(a);

}
int sort(int s[])
{
    int temp,i;
    for(i=1;i<10;i++)
    {
        if(s[i-1]<s[i])
        {
            temp=s[i-1];
            s[i-1]=s[i];
            s[i]=temp;
        }
    }
    return s[];
}

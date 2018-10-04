#include<stdio.h>
int sum(int a[3][3],int i,int j);
int main()
{
 int a[3][3]={1,2,3,4,5,6,7,8,9},i=3,j=3,s;
 s=sum(a,i,j);
 printf("%d",s);
}
int sum(int a[3][3],int i,int j)
{
  int s=0,x,y;
  for(x=0;x<i;i++)
     for(y=0;y<j;y++)
       {
           s=s+a[x][y];
       }
       return s;
}

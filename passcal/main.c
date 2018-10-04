#include <stdio.h>
#include <stdlib.h>
int array(int x[], int n);
int main()
{
 int a[10],i,sum;

 for(i=0;i<10;i++)
    scanf("%d",&a[i]); //taking input

 sum=array(a,10);     //sending array and reciving the return

 printf("%d",sum);
}

int array(int x[],int n)
{
  int s=0,i;
  for(i=0;i<n;i++)
   {
     s=s+x[i];
   }
 return s;  //returning sum;
}

#include <stdio.h>

int main() {

   int s;
   scanf("%d",&s);
   int a[s],i,j=0;
   for(i=0;i<s;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<s;i++)
   {
      if(a[i]>=10&&a[i]<=20)
           j++;
   }
   printf("%d in\n%d out\n",j,s-j);
   return 0;
}

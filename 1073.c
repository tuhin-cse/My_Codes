#include <stdio.h>

int main() {

   int a,N;
   scanf("%d",&N);
   if(N>5&&N<2000)
   {

       for(a=2;a<=N;a+=2)
      {
       printf("%d^%d = %d\n",a,a,a*a);
      }

   }

    return 0;
}

#include <stdio.h>

int main() {

    int a,b,c,s=0,temp;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    if(a%2!=0)
      {
          for(c=a+2;c<b;c+=2)
          {
              s=s+c;
          }
      }
    if(a%2==0)
      {
          for(c=a+1;c<b;c+=2)
          {
              s=s+c;
          }
      }
    printf("%d\n",s);
    return 0;
}

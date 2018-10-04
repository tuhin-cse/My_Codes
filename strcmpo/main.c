#include <stdio.h>
#include <stdlib.h>
int main()
{
   char x[200],y[200];
   scanf("%s %s",&x,&y);
   int f;
   int i;
  for(i=0; ;i++)
   {
    if(x[i]!='\0'&&y[i]=='\0')
      {
       f=1;
       break;
      }
    else if(x[i]=='\0'&&y[i]!='\0')
      {
       f=-1;
       break;
       }
    else if(x[i]=='\0'&&y[i]=='\0')
      {
       f=1;
       break;
       }
    else  if(x[i]>y[i])
          {
            f=x[i]-y[i];
            break;
          }
    else if(x[i]<y[i])
       {
          f= y[i]-x[i];
          break;
       }
   }

   printf("%d",f);

}

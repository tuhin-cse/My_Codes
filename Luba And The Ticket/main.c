#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={0},b,i=0,c;
    scanf("%d",&b);
    while(b)
    {
      a[i]=b%10;
      i++;
      b=b/10;
    }
    int x,y;
    x=a[5]+a[4]+a[3];
    y=a[0]+a[1]+a[2];
    if(x==y)
       {
           printf("0\n");
           return 0;
       }
   else

   {
       int j,k,m,n,t1,t2;
        for(i=0;i<6;i++)
              for(m=0;m<10;m++)
              {
                      t1=a[i];
                      a[i]=m;
                      if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
                      {
                          printf("1\n");
                          return 0;
                      }
                      a[i]=t1;

                  }

        for(i=0;i<5;i++)
            for(j=i+1;j<6;j++)
            {
              for(m=0;m<10;m++)
              {
                  for(n=0;n<10;n++)
                  {
                      t1=a[i];
                      t2=a[j];
                      a[i]=m;
                      a[j]=n;
                      if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
                      {
                          printf("2\n");
                          return 0;
                      }
                      a[i]=t1;
                      a[j]=t2;

                  }
              }
            }


   }
   printf("3\n");
    return 0;
}

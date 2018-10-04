#include <stdio.h>

int main()
{
    int n,m,t=0,flag=0;
    while(scanf("%d %d",&n,&m)==2)
    {

       if(n==0||m==0)
         continue;
       char a[n][m],b[n][m+1];
       int i,j;
       for(i=0;i<n;i++)
       {
          for (j=0;j<m;j++)
           {
           b[i][j]='0';
           }
           b[i][m]='\0';
        }
       for(i=0;i<n;i++)
         scanf("%s",a[i]);
       for( i=0;i<n;i++)
       {
          for (j=0;j<m;j++)
           {
             if(a[i][j]=='*')
             {
               b[i][j]='*';
               if((i-1)>=0)
               {
                  if(b[i-1][j]!='*')
                     b[i-1][j]++;
                  if(j+1<m&&b[i-1][j+1]!='*')
                    b[i-1][j+1]++;
               }
               if(j+1<m)
               {
                 if(b[i][j+1]!='*')
                    b[i][j+1]++;
                 if(i+1<n&&b[i+1][j+1]!='*')
                    b[i+1][j+1]++;

               }
               if(i+1<n)
                {
                  if(b[i+1][j]!='*')
                     b[i+1][j]++;
                  if(j-1>=0&& b[i+1][j-1]!='*')
                      b[i+1][j-1]++;

                }
                if(j-1>=0)
                {
                  if(b[i][j-1]!='*')
                      b[i][j-1]++;
                  if(i-1>=0&&b[i-1][j-1]!='*')
                      b[i-1][j-1]++;

                }
             }
           }
       }
        if(flag!=0)
            printf("\n");
        flag++;
       printf("Field #%d:\n",++t);
       for( i=0;i<n;i++)
       {
         printf("%s\n",b[i]);
        }

    }
    return 0;
}

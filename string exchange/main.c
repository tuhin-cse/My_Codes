#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[200],b[100],c[100];
    gets(a);
    scanf("%s %s",&b,&c);
    int i,j,k,l,m,o,p,q,r,s,t=0,x;
    for(l=0;a[l]!='\0';l++)
    {}
    for(i=0;a[i]!='\0';i++)
       {
         if((a[i]==b[0]&&a[i-1]==' ')||(i==0))
          {
           k=0;
           for(j=0,q=i;a[q]!=' ';q++)
            {
            if(a[q]=='\0')
               break;
             if(a[q]==b[j])
                   k++;
                   j++;
            }
           for(x=0;b[x]!='\0';x++)
           {}
           if(k==j&&k==x)
            {
             for(m=0;c[m]!='\0';m++)
             {}
             for(o=0,p=i;o<m;o++,p++)
               {
                if(a[p]==' ')
                {
                for(r=l;r>=p;r--)
                    a[r]=a[r-1];
                l++;
                t++;
                }
                a[p]=c[o];
               }
               if(t!=0)
                 {
                  a[l]='\0';
                  break;
                 }
                if(a[p]>='A'&&a[p]<='z')
                 {
                  while(a[p]!=' ')
                  {
                   for(s=p;a[s]!='\0';s++)
                      a[s]=a[s+1];
                   l--;
                   if(a[p]=='\0')
                      break;
                  }
                   a[l]='\0';
                 }


            }

          }
       }
    puts(a);
    return 0;
}

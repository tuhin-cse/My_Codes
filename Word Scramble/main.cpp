#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
  string b;
  char a[10000],c[10000];
   while(fgets(a,10000,stdin))
   {
       int ne=0,nl=0;
       for(int i=0;a[i]!='\0';i++)
       {
           int j;
           b="";
           for (j=i;a[j]!=' ';j++)
           {
               if(a[j]=='\0'||a[j]=='\n')
                  break;
               b+=a[j];
           }
           char cr[b.size()];
           int z=b.size();
           for(int k=0;k<b.size();k++)
                   cr[k]=b[k];

           reverse(cr,cr+z);
           for(int k=0;k<b.size();ne++,k++)
           {
             c[ne]=cr[k];
           }

           c[ne]=' ';
           ne++;
           i=j;
       }
       c[ne-1]='\0';
       cout<<c<<endl;
   }
}

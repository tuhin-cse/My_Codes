#include <stdio.h>

int main() {
    int l,x['2']={0};
    scanf("%d",&l);
    char a[l];
    scanf("%s",&a);

    int i,j,k,len=0,b=0;

    for(i=0;i<l;i++)
    {
      for(j=i+1;j<l;j+=2)
      {
          for(k=i;k<=j;k++)
          {
             char c=a[k];
              x[c]++;
          }
          if(x['1']==x['0'])
              len=x['1']*2;
          if(b<len)
              b=len;
          x['0']=0;
          x['1']=0;
      }

    }
        printf("%d\n",b);

    return 0;
}

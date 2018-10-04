#include <stdio.h>
#include <stdlib.h>
struct student{
  int roll,a[5],av;
};

int main()
{
    int l,check;
    scanf("%d",&l);
    struct student s[l];

    int i,j;
    for(i=0;i<l;i++)
      {
          scanf("%d",&s[i].roll);
          check=s[i].roll;
          for(j=0;j<5;j++)
          {
              scanf("%d",&s[i].a[j]);

          }

        s[i].av=(s[i].a[0]+s[i].a[1]+s[i].a[2]+s[i].a[3]+s[i].a[4])/5;
      }
    int c;
    scanf("%d",&c);
    for(i=0;i<l;i++)
        if(c==s[i].roll)
           printf("%d",s[i].av);
    return 0;
}

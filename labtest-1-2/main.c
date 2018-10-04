#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1,l2;
    scanf("%d %d",&l1,&l2);
    int a[l1][l2];
    int i,j;
    for(i=0;i<l1;i++)
        for(j=0;j<l2;j++)
        {
             scanf("%d",&a[i][j]);
        }


    int sum=0,flag;
    for(i=0;i<l2;i++)
    {
        flag=0;
        if(a[i]==1)
             flag=1;
        for(j=2;j<a[i];j++)
        {
            int x;
            x=a[i];
            if(x%j==0)
                     flag=1;
        }

        if(flag==0)
             sum=sum +a[0][i];
    }

    for(i=1;i<l1;i++)
    {
        flag=0;
        if(a[i]==1)
             flag=1;
        for(j=2;j<a[i];j++)
            {
            int x;
            x=a[i];
            if(x%j==0)
                 flag=1;
        }
        if(flag==0)
           sum = sum + a[i][0];
    }

    for(i=1;i<l1;i++)
    {
        flag=0;
        if(a[i]==1)
             flag=1;
      for(j=2;j<a[i];j++)
       {
            int x;
            x=a[i];
            if(x%j==0)
              flag=1;
        }
        if(flag==0)
        sum=sum+a[i][l1-1];
    }
    for(i=1;i<l2-1;i++)
    {
    flag=0;
    if(a[i]==1)
             flag=1;
     for(j=2;j<a[i];j++)
       {
            int x;
            x=a[i];
            if(x%j==0)
                flag=1;
        }
        if(flag==0)
        sum= sum + a[l1-1][i];
    }
    printf("%d",sum);
    return 0;
}

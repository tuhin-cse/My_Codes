#include <stdio.h>
#include <stdlib.h>
struct marks{
    int num[3];
};
struct student{
    struct marks sd[5];
};

int main()
{
    int n;
    scanf("%d",&n);
    struct student s[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<3;k++)
                scanf("%d",&s[i].sd[j].num[k]);
        }
    }
     for(i=0;i<5;i++)
    {
        int x=0,temp;
        for(j=0;j<n;j++)
           temp=s[j].sd[i].num[0]+s[j].sd[i].num[1]+s[j].sd[i].num[2];
         if(temp>x)
              x=temp;

        printf("The greatest number of subject %d is %d\n",i+1,x);
    }
    return 0;
}

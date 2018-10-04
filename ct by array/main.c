#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s[a][5][3];
    int i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<3;k++)
                scanf("%d",&s[i][j][k]);
        }
    }
    for(i=0;i<5;i++)
    {
        int x=0,temp;
        for(j=0;j<a;j++)
        {
         temp=s[j][i][0]+s[j][i][1]+s[j][i][2];
         if(temp>x)
            x=temp;
        }
        printf("The greatest number of subject %d is %d\n",i+1,x);

    }
    return 0;

}

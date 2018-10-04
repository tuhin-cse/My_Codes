#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    int x=a[0][0];

    for(i=1;i<n;i++)
        if(a[0][i]>x)
           x=a[0][i];

    for(i=1;i<m;i++)
        if(a[i][0]>x)
           x=a[i][0];

    for(i=0;i<n;i++)
        if(a[m-1][i]>x)
           x=a[m-1][i];

    for(i=0;i<m;i++)
        if(a[i][n-1]>x)
           x=a[i][n-1];

    printf("The greatest Number: %d" ,x);
    return 0;
}

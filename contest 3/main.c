#include<stdio.h>

main()
{
    int N,K,i=0,j,m;
    scanf("%d %d",&N,&K);
    for(j=N;j>0;j--)
    {
        for(m=1;m<j;m++)
        {
            if(j%m==K)
            {
                i=i+1;
            }
        }
    }

       printf("%d",i);
    return 0;
}

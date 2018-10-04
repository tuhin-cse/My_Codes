#include<stdio.h>
int main()
{
    int a[5]={0},n,i,v,s=0;
    printf("Enter total number of voter: ");
    scanf("%d",&n);
    printf("Enter votes: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&v);
        a[v-1]++;
        if(v>5)
            s++;
    }
    for(i=0;i<5;i++)
    {
        printf("%d number candidate got %d vates\n",i+1,a[i]);

    }

    printf("\nThe spoilt votes are %d ",s);
    return 0;
}

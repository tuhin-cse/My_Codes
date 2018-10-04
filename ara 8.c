#include<stdio.h>
main()
{
    int a[5][5],i,j;
    {
        for(i=0;i<5;i++){
                for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
                }
        }
    }
    for(i=0;i<5;i++){
       for(j=0;j<5;j++ ){

        printf("\t%d",a[i][j]);
    }
    printf("\n");

}
}

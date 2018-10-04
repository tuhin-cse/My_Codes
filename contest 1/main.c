#include <stdio.h>
main()
{
  int size,i,j;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

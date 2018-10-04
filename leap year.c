#include<stdio.h>
main()
{
    int y1,y2,i;
    scanf("%d %d",&y1,&y2);
    for (i=y1;i<=y2;i++)
    {
        if(i%400==0||(i%100!=0&&i%4==0))
        printf("%d is a Leap Year\n",i);
    else
        printf("%d is no a Leap Year\n",i);

    }

}

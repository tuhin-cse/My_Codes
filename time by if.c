#include<stdio.h>
main()
{
    int m1,s1,m2,s2,h,m,s;
    scanf("%d:%d %d:%d",&m1,&s1,&m2,&s2);
    m=m1+m2;
    s=s1+s2;
    if(s>=60)
    {
     s=s-60;
     m++;
    }
  printf("%d:%d",m,s);
  return 0;
}


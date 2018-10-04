#include<stdio.h>
main()
{
    int h1,h2,m1,s1,m2,s2,h,m,s;
    scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
    h=h1+h2;
    m=m1+m2;
    s=s1+s2;
    if(s>=60)
    {
     s=s-60;
     m++;
    }
   if(m>=60)
   {
       h+=1;
       m=m-60;
   }
   printf("%d:%d:%d",h,m,s);
   return 0;
}

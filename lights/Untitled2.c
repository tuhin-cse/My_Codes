#include<stdio.h>
#include<stdlib.h>
int gun();
float main()
{
int a;
float b,d;
scanf("%d %f",&a,&b);
d=gun(a,b);
printf("%.2f",d);

}
 float gun(int x,float y)
{
float s;
s=x*y;
return s;

}

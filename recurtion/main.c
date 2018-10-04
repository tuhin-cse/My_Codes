#include <stdio.h>
#include <stdlib.h>
int fac(int a)
{
    int i=a;
    if(i==1)
        return 1;
    return i*fac(i-1);

}
int f(int n,int i)
{
 if(i==n)
 {
     return n;
 }
 else
 {
     return i+f(n,i+1);
 }
}
int main()
{
    int x,y,z;
    scanf("%d",&x);
    z=fac(x);
    y=f(x,1);
    printf("%d %d",z,y);
    return 0;
}

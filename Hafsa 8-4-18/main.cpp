#include<stdio.h>


double f(double p,double q,double r,double s,double t,double u,double x)
{
    return(p+(q*x)+(r*x*x)+(s*x*x*x)+(t*x*x*x*x)+(u*x*x*x*x*x));
}
int main()
{
    int i,j,k,n;
    double a,b,h,x_[100],fx[100],I,sum=0,p,q,r,s,t,u,x;
    scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u);
    scanf("%d",&n);
    scanf("%lf %lf",&a,&b);
    h=(b-a)/n;
    x_[0]=a;
    x_[n]=b;
    for(i=1;i<n;i++)
    {
        x_[i]=x_[i-1]+h;
    }
    for(i=0;i<=n;i++)
    {
        fx[i]=f(p,q,r,s,t,u,x_[i]);
    }
    printf("%lf",fx[1]);
    return 0;
}

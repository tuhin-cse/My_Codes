#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>

using namespace std;
int c=0;
double baselog(double i,double base)
{
    return log(i)/log(base);
}

int main()
{
    int t,n,base;
    double e = 2.718281828 ;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&base);
        double x = baselog(sqrt(2*M_PI*n),(double)base) +(double)n * baselog(n/e,(double)base);
        //if(n==0)
          //x=0;
        printf("Case %d: %d\n",++c,(int)x+1);
    }
    return 0;
}

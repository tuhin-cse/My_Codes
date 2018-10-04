#include <bits/stdc++.h>
#include<cstdio>

using namespace std;
int leaddisit(long long n,long long p)
{
   double d = log10(n);
   long long z = d;
   d-=z;
   d*=p;
   z=d;
   d-=z;
   d=pow(10,d);
   return d*100;

}

int trailingdisit(long long n,long long p)
{
    long long x=1;
    while(p)
    {
        if(p&1)
          x=(x*n)%1000;
        n=(n*n)%1000;
        p = p/2;
    }
    return x;
}

int main()

{
    long long n,p,c=0,t,ta;
    cin >> t;
    while(t--)
    {
        cin >> n >> p ;
        ta=trailingdisit(n,p);
        cout << "Case " << ++c << ": " << leaddisit(n,p) << " ";
        printf("%03lld\n",ta);
    }
    return 0;
}

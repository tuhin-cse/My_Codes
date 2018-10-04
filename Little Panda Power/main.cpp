#include <bits/stdc++.h>

using namespace std;

long long power(long long n,long long p,long long m)
{
    long long res=1;
    n=n%m;
    while(p)
    {
        if(p&1)
            res=(res*n)%m;
        p/=2;
        n=(n*n)%m;
    }
    return res;
}
int gcd(int a,int b,int &x,int &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    int x1,y1;
    int d=gcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

int main()
{
    long long a,b,x,t;
    cin >> t ;
    while(t--)
    {
        cin>> a >> b >> x ;
        if(b<0)
        {
            int xx,y;
            gcd(a,x,xx,y);
            a=(xx%x+x)%x;
            b=abs(b);
        }
        cout << power(a,b,x) << endl;
    }
    return 0;
}

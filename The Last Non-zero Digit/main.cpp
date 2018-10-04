#include <iostream>

using namespace std;

int solve(int n,int m)
{
    int d=1,z;
    for(int i=1+n-m;i<=n;i++)
    {
        z=i;
        while(z%10==0)
            z/=10;
        d=(d*z)%1000;
        while(d%10==0)
            d/=10;
    }
    cout << d%10 << endl;
}
int main()
{
    int n,m;
    while(cin>> n >> m)
        solve(n,m);
    return 0;
}

#include <iostream>

using namespace std;

long long extendedEuclid(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    long long x1,y1;
    long long d=extendedEuclid(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}

int main()
{
    long long a,b,x,y,gcd;
    while(cin >> a >> b)
    {
        gcd=extendedEuclid(a,b,x,y);
        cout << x <<" "<< y << " " << gcd << endl;
    }
    return 0;
}

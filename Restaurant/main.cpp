#include <iostream>

using namespace std;


int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n,l,r,s;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> l >> r ;
        s=gcd(l,r);
        cout << (l*r)/(s*s) << endl;
    }
}

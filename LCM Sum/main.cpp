#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
 {
     return (a/gcd(a,b))*b;
 }

int main()
{
    int t,n;long long sum;
    cin >> t;
    while(t--)
    {
       sum=0;
       cin >> n;
       for(int i=1;i<=n;i++)
          sum+=lcm(i,n);
       cout << sum << endl;
    }
    return 0;
}

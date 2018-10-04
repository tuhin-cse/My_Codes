#include <bits/stdc++.h>

using namespace std;

void solve(long long n)
{
    long long sqrtn=sqrt(n),z;
    for(long long i=sqrtn;i>=(i-sqrt(i));i--)
    {
        z=sqrt(n-i*i);
        if(z*z==(n-i*i))
        {
           cout << "Yes" << endl;
           return ;
        }
    }
    cout << "No" << endl;
}

int main()
{
    long long c,n;
    cin >> c ;
    while(c--)
        {
            cin >> n;
            solve(n);
        }
    return 0;
}

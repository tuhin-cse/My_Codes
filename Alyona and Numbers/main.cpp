#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long a,b,sum=0;
    cin >> a>>b;
    for(int i=1;i<=a;i++)
    {
        sum+=((i+b)/5-(i/5));
    }
    cout << sum << endl;
    return 0;
}

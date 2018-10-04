#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k,n,s,p;
    cin >> k >> n >> s >> p ;
    s=ceil((float)n/s);
    k=k*s;
    cout << ceil((float)k/p) << endl;
    return 0;
}

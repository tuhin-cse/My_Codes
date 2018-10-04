#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,sum=0,t,min=LONG_MAX,max=0;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> t ;
        sum+=t;
        if(t>max)
            max=t;
        if(min>t)
            min=t;
    }
    cout << sum-max << " " << sum-min << endl;
    return 0;
}

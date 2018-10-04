#include <bits/stdc++.h>

using namespace std;


void solve(vector<int> v)
{
    int m=1 ;
    for(int i=0;i<v.size();i++)
    {
        m*=v[i];
        m%=1234567;
    }
    m%=1234567;
    cout << m%1234567 << endl;
}

int main()
{
    int t,n,temp;
    vector<int> v;
    cin >> t ;
    while(t--)
    {
        v.clear();
        cin >> n ;
        for(int i=0;i<n-1;i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        solve(v);
    }
}

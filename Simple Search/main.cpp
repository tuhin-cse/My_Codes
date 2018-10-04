#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << INT_MAX;
    map<int,int> m ;
    int n,t;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        m[t]=i;
    }
    cin >> t;
    cout << m[t] << endl;
    return 0;
}

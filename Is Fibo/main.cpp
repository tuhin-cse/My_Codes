#include <bits/stdc++.h>

using namespace std;
vector<long long> v ;

void seive()
{
    long long size = 10000000000 ;
    v.push_back(0);
    v.push_back(1);
    for(int i =2;i<60;i++)
    {
        cout << v[i-1]+v[i-2]  << endl;
        v.push_back(v[i-1]+v[i-2]);
    }
}
bool isFibo(long long n)
{
    for(int i =0;i<v.size();i++)
    {
        if(n==v[i])
            return true;
    }
    return false;
}
int main()
{
    seive();
    int t;
    cin >> t ;
    while (t--)
    {
        long long n ;
        isFibo(n) ? cout << "IsFibo" << endl :
                    cout  << "IsNotFibo" << endl;
    }
    return 0;
}

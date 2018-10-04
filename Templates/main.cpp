#include <bits/stdc++.h>

using namespace std;

///From seive.cpp;
void seive();
bool is_prime(long long n);
vector<int> factorize( int n );


int main()
{
    seive();
    vector<int> f= factorize(100);
    for(int i=0;i<f.size();i++)
        cout << f[i] << endl;
}

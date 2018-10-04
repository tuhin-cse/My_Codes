#include <bits/stdc++.h>

using namespace std;

bitset<1000010> pr;
vector<int> prime;

void seive()
{
    int size=1000000;
    pr.set();
    prime.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(pr[i])
        {
            for(long long j=i*i;j<size;j+=(i*2))
                pr[j]=0;
            prime.push_back(i);
        }
    }
}
bool is_prime(int n)
{
    if(n%2==0 && n!=2)
        return false;
    return pr[n];
}
void solve(int n)
{
    for(int i=0;prime[i]<=n/2;i++)
    {
        if(is_prime(n-prime[i]))
        {
          cout << n << ":\n" << prime[i] << "+" << n-prime[i] << endl;
          return;
        }
    }
    cout  << n << ":\n" << "NO WAY!" << endl;
}
int main()
{
    seive();
    //cout << prime.size();
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        solve(n);
    }
    return 0;
}

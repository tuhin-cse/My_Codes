#include <bits/stdc++.h>

using namespace std;

bitset<100000000>pr;
vector<int> prime;
void seive()
{
    int size=100000000;
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
long long lcm(long long n)
{
    long long l=1,mod=pow(2,32);
    for(int i=0;i<prime.size() && prime[i]<=n;i++)
    {
        long long pp=prime[i];
        while(pp*prime[i]<=n)
            pp*=prime[i];
        l=(l*pp)%mod;
    }
    return l%mod;
}

int main()
{
    seive();
   // cout << prime.back();
    long long n,t,c=0;
    cin >> t ;
    while(t--)
    {
       cin >> n;
       cout << "Case " << ++c << ": " << lcm(n)<< endl;
    }
    return 0;
}

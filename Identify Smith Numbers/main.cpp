#include <bits/stdc++.h>

using namespace std;
bitset<1000000> pr;
vector<int> prime;
void seive()
{
    pr.set();
    int size=sqrt(INT_MAX)+1;
    prime.push_back(2);
    for(int i=3;i<=size;i+=2)
    {
        if(pr[i])
        {
            for(long long j=i*i;j<=size;j+=(i*2))
                pr[j]=0;
            prime.push_back(i);
        }
    }
}
int dsum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int primefacsum(int n)
{
    int sqrtn=sqrt(n),sum=0;
    for(int i=0;i<prime.size()&&prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                sum+=dsum(prime[i]);
            }
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
       sum+=dsum(n);
    return sum;
}

int main()
{
    seive();
    int n;
    cin >> n ;
    dsum(n)==primefacsum(n) ? cout << "1" << endl : cout << "0" << endl;
    return 0;
}

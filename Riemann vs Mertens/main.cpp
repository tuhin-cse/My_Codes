/**<  */#include <bits/stdc++.h>
#include <cstdio>
#define pb push_back

using namespace std;
bitset<1000001> bit;
vector<int> factor;
vector<int> i_factor;
vector<int> prime;
vector<int> n,m;

void seive()
{
    bit.set();
    int size=1000000;
    prime.pb(2);
    for(int i=3;i<=size;i+=2)
    {
        if(bit[i]==1)
        {
            for(long long j=i*i;j<=size && j>0;j+=(i*2))
            {
                bit[j]=0;
            }
            prime.push_back(i);
        }

    }
}

void factorize(int n)
{
    int rootn = sqrt(n);
    int z=prime.size();
    for(int i=0;i<prime.size() && prime[i]<=rootn;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                factor.pb(prime[i]);
                n/=prime[i];
            }
            i_factor.pb(prime[i]);
            rootn = sqrt(n);
        }

    }
    if(n!=1)
       factor.pb(n);
    if(i_factor.empty())
        i_factor.pb(n);
    else if(n!=i_factor.back() && n!=1)
            i_factor.pb(n);
}
void calculate()
{
    seive();
    int sum=1;
    n.pb(1);
    m.pb(1);
    for(int i=2;i<=1000000;i++)
    {
        factor.clear();
        i_factor.clear();


        factorize(i);

        int l=factor.size();
        int ll=i_factor.size();

        if((bit[i]==1 && i%2!=0)||i==2)
            n.pb(-1);
        else if(factor.size()!=i_factor.size())
            n.pb(0);
        else if(factor.size()%2==0)
            n.pb(1);
        else
            n.pb(-1);
        sum+=n.back();
        m.pb(sum);
    }

}

int main()
{
    calculate();

    int a;
    while(cin >> a)
    {
        if(a==0)
            break;
        printf("%8d%8d%8d\n",a,n[a-1],m[a-1]);
    }
}

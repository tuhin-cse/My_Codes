#include <bits/stdc++.h>

using namespace std;

bitset<100000001> p;
vector<long long> prime;
vector<long long> factor;
long long size;

void seive()
{
    size=10000000;
    p.set();
    prime.push_back(2);

    for(long long i=3;i<=size;i+=2)
    {
        if(p[i]==1)
        {
            for(long long j=i*i;j<=size;j+=(i*2))
                p[j]=0;
            prime.push_back(i);
        }
    }
}

void factors(long long n)
{
    int sn =(int)sqrt(n);
    int p=prime.size();
    for(long long i=0;i<prime.size()&&i<=sn;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                factor.push_back(prime[i]);
                n/=prime[i];
            }
            sn=(int)sqrt(n);
        }
    }
    if(n!=1)
        factor.push_back(n);
}

int main()
{
   seive();
   long long a,p;

   while(cin >> a)
   {
       if(a==0)
        break;
       if(a<0)
        a*=(-1);
       factor.clear();
       factors(a);
       factor.size() > 1 && factor.front()!=factor.back() ? cout << factor.back() << endl : cout << "-1" << endl;
   }

}

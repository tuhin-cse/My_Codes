#include <bits/stdc++.h>

using namespace std;

bitset<40000> pr;
vector<int> prime;

void seive()
{
    int size=31622;
    pr.set();
    prime.push_back(2);
    for(int i=3;i<size;i+=2)
    {
        if(pr[i])
        {
            for(int j=i*i;j<size;j+=(i*2))
                pr[j]=0;
            prime.push_back(i);
        }
    }
}
int NOD(int n)
{
    int sqrtn=sqrt(n),res=1;
    for(int i=0;i<prime.size()&&prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
           int p=0;
           while(n%prime[i]==0)
           {
               p++;
               n/=prime[i];
           }
           p++;
           res*=p;
           sqrtn=sqrt(n);
        }
    }
    if(n!=1)
        res*=2;
    return res;
}

int main()
{
    seive();
    int t,l,h,n,d,z;
    cin >> t ;
    while(t--)
    {
        d=0;
        cin >> l >> h ;
        for(int i=l;i<=h;i++)
        {
            z=NOD(i);
            if(z>d)
            {
                d=z;
                n=i;
            }
        }
        cout << "Between " << l << " and " << h << ", " << n <<
              " has a maximum of " << d << " divisors." << endl;
    }
    return 0;
}

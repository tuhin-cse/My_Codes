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
int PHI(int n)
{
    int sqrtn=sqrt(n),res=n;
    for(int i=0;i<prime.size()&&prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
           int p=0;
           while(n%prime[i]==0)
           {
               n/=prime[i];
           }
           res/=prime[i];
           res*=prime[i]-1;
           sqrtn=sqrt(n);
        }
    }
    if(n!=1)
        {
            res/=n ; res*=n-1;
        }
    return res;
}

int main()
{
    seive();
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        cout << PHI(n) << endl;
    }
}


#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<long long> v_prime;
int size;

void seive()
{
    size=1000000+1;
    prime.set();
    prime[1]=0;
    v_prime.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;

            v_prime.push_back(i);
        }

    }

}

int ans(long long l,long long u)
{
    int c=0;
    for(int i=0;v_prime[i]*v_prime[i]<=u && i< v_prime.size();i++)
    {
        long long z=v_prime[i];
        while((z*=v_prime[i])<=u)
        {
            if(z>=l)
                c++;

        }

    }
    return c;
}

int main()
{
    seive();

    long long t,l,u;
    cin >> t;
    while(t--)
    {
        cin >> l >> u ;

        cout << ans(l,u) << endl;
    }
}


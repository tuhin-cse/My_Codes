#include <bits/stdc++.h>

using namespace std;
bitset<20000001> prime;
vector<int> twin_prime;

void seive()
{
    prime.set();
    prime[1]=0;
    for(int i=3;i*i<20000001;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<20000001;j+=(i*2))
                  prime[j]=0;
        }

    }
}
int main()
{
    seive();
    for(int i=5;i<20000001;i+=2)
        if(prime[i-2] && prime[i])
           twin_prime.push_back(i-2);

    int n;
    while(cin >> n)
    {
        cout << "(" << twin_prime[n-1] << ", " << twin_prime[n-1]+2 << ")" << endl;
    }
    return 0;
}

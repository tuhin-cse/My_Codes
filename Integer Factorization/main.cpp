#include <bits/stdc++.h>
using namespace std;

bitset<100000000> p;
vector<int> prime;
void seive()
{
   long long size=100000000;
    p.set();
    prime.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(p[i])
        {
            for(long long j=i*i;j<size;j+=i)
                p[i]=0;
            prime.push_back(i);
        }
    }
}

int main()
{
    seive();
    cout << prime.size() << endl;
    return 0;
}

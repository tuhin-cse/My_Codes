
#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<int> v_prime;
int size;

void seive()
{
    size=sqrt(INT_MAX)+1;
    prime.set();
    prime[1]=0;
    v_prime.push_back(2);
    for(int i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<size;j+=(i*2))
                prime[j]=0;

            v_prime.push_back(i);
        }

    }
}

bool is_prime(long long n)
{
    if(n%2==0 && n!=2)
        return false;

    if(n<size)
        return prime[n];

    for(int i=0;i<(int)v_prime.size() ;i++)
        if(n%v_prime[i]==0)
            return false;
    return true;
}


int main()
{
    seive();
    int t,l,u;
    cin >> t;
   // cout << t;
    while(t--)
    {
        cin >> l >> u ;
        for(long long i=l;i<=u;i++)
            if(is_prime(i))
              cout << i << endl;
        cout << endl;
    }
}

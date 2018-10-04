#include <bits/stdc++.h>

using namespace std;

bitset<1000001> prime;
vector<int> v_prime;
int size;

void seive()
{
    prime.set();
    prime[1]=0;
    for(int i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;
            v_prime.push_back(i);
        }

    }
}

bool is_prime(int n)
{
    if(n<size)
        return prime[n];
    for(int i=0;i<(int)v_prime.size();i++)
        if(n%v_prime[i]==0)
            return false;
    return true;
}

int main()
{
    seive();
    long long p,y;
    cin >> p >> y;
    for(long long i=y;i>p;i--)
    {
        if(is_prime(i))
        {
            cout << i << end;
        }
    }
    cout << "-1" << end;
}

//for(int i=0;i< ;i++)
//for(int j=0;j< ;j++)


#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
//vector<int> v_prime;
long long size;

void seive()
{
    size=1000000+1;
    prime.set();
    prime[1]=0;
 //   v_prime.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;

           // v_prime.push_back(i);
        }

    }
}

bool is_prime(long long n)
{
    if(n%2==0 && n!=2)
        return false;
    if(n<size)
        return prime[n];
}

int solve(long long n)
{
    long long rn=sqrt(n);

    if(rn*rn==n && is_prime(rn))
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}


int main()
{
    seive();

    long long n,s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        solve(s);
    }


}

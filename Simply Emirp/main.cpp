#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
int size;

void seive()
{
    size=1000000;
    prime.set();
    prime[1]=0;

    for(long long i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;

        }
    }
}

void solve(int n)
{
    if(n!=2 && n%2==0)
    {
        cout << n << " is not prime." << endl;
        return ;
    }
    if(prime[n])
    {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        if(prime[(stoi(s))] && n!=stoi(s) && stoi(s)%2!=0)
        {
            cout << n << " is emirp." << endl;
             return ;
        }
        cout << n << " is prime." << endl;
        return ;
    }
    cout << n << " is not prime." << endl;
    return ;
}

int main()
{
    seive();
    int n;
    while(cin >> n)
        solve(n);

    return 0;
}

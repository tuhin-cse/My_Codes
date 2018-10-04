#include <bits/stdc++.h>

using namespace std;

bitset<1001> prime;

void seive()
{
    prime.set();
    for(int i=4;i<1001;i+=2)
        prime[i]=0;

    for(int i=3;i*i<1001;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<1001;j+=(i*2))
                  prime[j]=0;
        }

    }
}


int main()
{
    int n,c;
    seive();
    while(cin >> n >> c)
    {
        vector<int> v;
        for(int i=1;i<=n;i++)
            if(prime[i])
               v.push_back(i);

        int s=v.size()/2;
        if(c*2>=v.size())
        {
            cout << n << " " << c << ": ";
            for(int i=0;i<v.size()-1;i++)
                 cout << v[i] << " ";
            cout << v[v.size()-1];
        }
        else if(v.size()%2==0)
        {
            cout << n << " " << c << ": ";
            for(int i=s-c;i<s+c-1;i++)
                cout << v[i] << " ";
            cout << v[s+c-1];
        }
        else
        {
            cout << n << " " << c << ": ";
            for(int i=s+1-c;i<s+c-1;i++)
                cout << v[i] << " ";
            cout << v[s+c-1];
        }
      cout << "\n" ;

    }
    return 0;
}

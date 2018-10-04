#include <bits/stdc++.h>

using namespace std;

bitset<100000001> prime;

void seive()
{
    prime.set();
    prime[1]=0;
    for(int i=3;i*i<100000001;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<100000001;j+=(i*2))
                  prime[j]=0;
        }

    }
}

int out(int n)
{
    int z=(int)n/2;
    if(z%2==0)
        z++;
    for(int i=z,k=0;i>2 && k <1000;i-=2,k++)
    {
        if(prime[i])
        {
            for(int j=n-i;j<n;j++)
            {
            if(j%2==0)
                j++;
            if(i+j>n)
                break;
            if(prime[j] && i+j==n && j>i)
              {
                 cout << n << " is the sum of " << i << " and " << j << "." <<endl;
                 return 0;
              }
            }
        }

    }
    if(n%2 != 0 && prime[n-2])
     {
      cout << n << " is the sum of 2 and " << n-2 << "." <<endl;
      return 0;
     }
    cout << n << " is not the sum of two primes!" << endl;
}

int main()
{
    seive();
    int n;
    while(cin >> n)
    {
      if(n==1)
        cout << n << " is not the sum of two primes!" << endl;
      else
        out(n);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

bitset<32770> prime;

void seive()
{
    prime.set();
    prime[1]=0;
    for(int i=3;i*i<32770;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<32770;j+=(i*2))
                  prime[j]=0;
        }

    }
}

int main()
{
    seive();
    int n,i,j;
    while(cin >> n)
    {
      int c=0;
      if(n==0)
        break;
      for(i=2;i<=n;i++)
      {
          if(i>2 && i%2==0)
             continue;
          if(prime[i]==1)
          {
            for(j=n;j>=i;j--)
            {
                if(j%2==0 && j!=2)
                    j--;
                if(prime[j]==1 && i+j==n)
                    c++;
            }
          }
      }
      cout << c << endl;

    }
}

#include <bits/stdc++.h>

using namespace std;
bitset<1000010> pr;

int out(int n)
{
    int i;
    n%2==0 ? i=n+1 : i=n+2;
    while(i-=2)
      {
          if(pr[i]==1)
          {
              for(int j=3; i+j <=n ;j++)
              {
                  if(pr[j]==1 && i+j==n)
                  {
                      cout << n << " = " << j << " + " << i << endl;
                      return 0;
                  }

              }
          }
      }
}

int main()
{
    pr.set();
    for(int i=3;i*i<=1000001;i+=2)
    {
        if(pr[i]==1)
        {
           for(int j= i*i ;j<1000001; j+= i)
                 pr[j] = 0;
        }

    }
    int n,i,j;
    while(cin >> n)
    {
      if(n==0)
        break;
      out(n);

    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

vector<long long> divs;

long long lcm(long long a,long long b)
{
    return (a/__gcd(a,b))*b;
}
long long divsisor(long long n)
{
    long long c=2,sqrtn=sqrt(n);
    for(int i=2;i<=sqrtn;i++)
    {
        if(n%i==0)
        {
            c+=2;
            divs.push_back(i);
            divs.push_back(n/i);
        }
    }
    if(sqrtn*sqrtn==n)
        c--;
    return c;
}

int main()
{
    long long n,z;
    while(cin >> n)
    {
        if(n==0)
            break;
        divs.clear();
        long long z = divsisor(n);
        if(divs.size()>1)
        {
          for(int i=0;i<divs.size();i++)
          {
           for(int j=i;j<divs.size();j++)
            {
               if(lcm(divs[j],divs[i])==n)
                   z++;
            }
          }
        }
       cout << n << " " << z << endl ;
    }
    return 0;
}

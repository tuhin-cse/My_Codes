#include <bits/stdc++.h>

using namespace std;

bitset<100000001> p;
vector<int> prime;
vector<int> factor;
int size;

void seive()
{
    size=46341;
    p.set();
    prime.push_back(2);

    for(int i=3;i<=size;i+=2)
    {
        if(p[i]==0)
        {
            for(long long j=i*i;j<=size;j+=(i*2))
                p[j]=0;
            prime.push_back(i);
        }
    }
}

void factors(long long n)
{
    int sn =(int)sqrt(n);
    int p =prime.size();
    for(int i=0;i<prime.size()&&i<=sn;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                factor.push_back(prime[i]);
                n/=prime[i];
            }
            sn=(int)sqrt(n);
        }
    }
    if(n!=1)
        factor.push_back(n);
}

int main()
{
   seive();
   long long a,p;

   while(cin >> a)
   {
       if(a==0)
        break;
       a>0 ? p=1 : p=-1 ;
       if(a<0)
          a=a*(-1);
       factor.clear();
       if(a!=1)
           factors(a);
       cout << a*p << " = ";
       if(p==-1)
        cout << "-1 x ";
        if(!factor.empty())
        {
            for(int i=0;i<factor.size()-1;i++)
            {
           cout << factor[i] << " x ";
             }

          cout << factor.back();
        }
        cout << "\n" ;
   }

}

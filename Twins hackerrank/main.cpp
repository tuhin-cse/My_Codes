#include <bits/stdc++.h>

using namespace std;
bitset<10000000> pr;
vector<int> prime;
void seive()
{
    pr.set();
    int size=10000000;
    prime.push_back(2);
    for(long long i=3;i<=size;i+=2)
    {
        if(pr[i])
        {
            for(long long j=i*i;j<=size;j+=(i*2))
                pr[j]=0;
            prime.push_back(i);
        }
    }
}
bool is_prime(int n)
{
    if(n%2==0 && n!=2)
        return false;
    if(n<10000000)
        return pr[n];
    for(int i=0;prime[i]<=sqrt(n);i++)
        if(n%prime[i]==0)
           return false;
    return true;
}
int main()
{
   seive();
   int n,m,c=0;
   cin >> n >> m;
   n&1 ? n=n : n++ ;
   for(int i=n+2;i<=m;i+=2)
   {
       if(is_prime(i) && is_prime(i-2))
         c++;
   }
   cout << c << endl;
}

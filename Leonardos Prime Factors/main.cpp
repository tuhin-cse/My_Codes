#include <bits/stdc++.h>

using namespace std;

vector<int> prime;
bitset<1010> prm;

void seive()
{
    int size= 100;
    prime.push_back(2);
    prm.set();
    for(long long i=3;i<size;i+=2)
    {
        if(prm[i])
        {
            for(long long j=i*i;j<size;j+=(2*i))
                prm[j]=0;
            prime.push_back(i);
        }
    }

}
void solve(long long n)
{
    long  m =1;
    for(int i=0;i<prime.size();i++)
    {
        m*=prime[i];
        if(m>n || m<0)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
   seive();
   long long t,n;
   cin >> t;
   while(t--)
   {
       cin >> n ;
       solve(n);
   }
}

#include <bits/stdc++.h>

using namespace std;

bitset<10000000> prime;

void seive()
{
    prime.set();
    for(int i=3;i<1000;i+=2)
    {
       if(prime[i]==1)
       {
           for(int j=i*i;j<1000000;j+=(i*2))
           {
               prime[j]=0;
           }
       }
    }
}

int main()
{
    seive();
    int n ,x=4;
    cin >> n ;
    if(n%2==0)
        cout << "4 " << n-4 << endl;
    else
    {
        while(prime[n-x])
        {
            x+=2;
        }
        cout << x << " " << n-x << endl;
    }
    return 0;
}

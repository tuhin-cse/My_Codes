#include <bits/stdc++.h>

using namespace std;

bitset<1000001> prime;
vector<int> v_prime;
int size;

void seive()
{
    size=1000001;
    prime.set();
    prime[1]=0;
    v_prime.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;

            v_prime.push_back(i);
        }

    }
}
int NOD( long long n ) {
    int sqrtn = sqrt ( n ) , res = 1;
    for ( int i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
            int p=0;
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];
                p++;
            }
            sqrtn = sqrt ( n );
            p++;
            res*=p;
        }
    }
    if ( n != 1 )
    {
        res*=2;
    }
    return res;
}
int main()
{
    seive();
   // cout <<v_prime.size();
    long long n,t,c=0;
    cin>> t ;
    while(t--)
    {
        cin >> n ;
        cout << "Case " << ++c << ": " << NOD(n)-1 << endl;
    }
}

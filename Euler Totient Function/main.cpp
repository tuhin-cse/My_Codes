
#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<int> v_prime;
int size;

void seive()
{
    size=1000;
    prime.set();
    prime[1]=0;
    v_prime.push_back(2);
    for(int i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<size;j+=(i*2))
                prime[j]=0;

            v_prime.push_back(i);
        }

    }
}

int ETF( int n ) {
    int sqrtn = sqrt ( n ),res=n;
    for ( int i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];
            }
            sqrtn = sqrt ( n );
            res/=v_prime[i];
            res*=v_prime[i]-1;
        }
    }

    if ( n != 1 )
    {
        res/=n;
        res*=n-1;
    }
    return res;
}
int main()
{
    seive();
    int t,n;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        cout << ETF(n) << endl;
    }
    return 0;
}

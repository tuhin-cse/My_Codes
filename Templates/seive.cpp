
#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<int> v_prime;
int size;

void seive()
{
    size=sqrt(INT_MAX)+1;
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

bool is_prime(long long n)
{
    if(n%2==0 && n!=2)
        return false;

    if(n<size)
        return prime[n];

    for(int i=0;i<(int)v_prime.size() ;i++)
        if(n%v_prime[i]==0)

            return false;
    return true;
}

vector<int> factors;
vector<int> factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];
                //cout << "prime" << v_prime[i] << endl;
                factors.push_back(v_prime[i]);
            }
            sqrtn = sqrt ( n );
        }
    }

    if ( n != 1 )
    {
        factors.push_back(n);
    }
    return factors;
}

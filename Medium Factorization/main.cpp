
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

bitset<100000000> prime;
vector<int> v_prime;

void seive()
{
    prime.set();
    prime[1]=0;
    v_prime.push_back(2);
    for(long long i=3;i<100000000;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<100000000;j+=(i*2))
                prime[j]=0;

            v_prime.push_back(i);
        }

    }
}
void factorize( long long n ) {
    long long sqrtn = sqrt ( n ),z;
    for ( int i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
                z=0;
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];
                z++;
            }
            sqrtn = sqrt ( n );
            if(n==1)
                printf("%d^%d",v_prime[i],z);
            else
                printf("%d^%d ",v_prime[i],z);
        }
    }
    if ( n != 1 )
    {
        printf("%d^1",n);
    }
}

int main()
{
    seive();
    long long n ;
    while(cin >> n)
    {
        if(n==0)
            break;
        factorize(n);
        printf("\n");
    }
    return 0;
}

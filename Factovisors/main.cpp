     /// UVa-10139 Factovisors
#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<long long> v_prime;
long long size;

void seive()
{
    size=pow(2,16)+1;
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

vector<long long> factors;
vector<long long> factorize( long long n ) {
    long long sqrtn = sqrt ( n );
    for ( long long i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
            long long z=1;
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];

                factors.push_back(v_prime[i]*z);

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


int solve (long long n,long long m)
{
    factors.clear();
    factorize(m);

    int in[1000000]={0};

    if(m!=0)
    for(long long i=0;i<factors.size();i++)
    {
        if(factors[i]>=pow(2,16))
        {
            if(factors[i]>n)
            {
            cout << m << " does not divide " << n << "!" << endl;
            return 0;
            }
        }
        else if(factors[i]<=n)
        {
            long long z=factors[i];
            if(in[z]==0)
                in[z]=z;

            if(in[z]%factors[i]==0)
                in[z]/=factors[i];
            else
            {
                while(in[z]%factors[i]!=0)
                {
                   z+=factors[i];
                   if(in[z]==0)
                         in[z]=z;
                }
                if(z>n)
                {
                   cout << m << " does not divide " << n << "!" << endl;
                   return 0;
                }
                else
                   in[z]/=factors[i];
            }
        }
        else
          {
            cout << m << " does not divide " << n << "!" << endl;
            return 0;
         }
    }
    cout << m << " divides " << n << "!" << endl;
}

int main()
{
    seive();

    long long n,m;
    while(cin >> n >> m)
    {
        solve(n,m);
    }

}

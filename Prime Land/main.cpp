#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

bitset<10000010> prime;
vector<int> v_prime;
int size;

void seive()
{
    size=sqrt(32676)+1;
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

vector<int> factors;
void factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < v_prime.size() && v_prime[i] <= sqrtn; i++ ) {
        if ( n % v_prime[i] == 0 ) {
            int c=0;
            while ( n % v_prime[i] == 0 ) {
                n /= v_prime[i];
                c++;
            }
            factors.push_back(c);
            factors.push_back(v_prime[i]);
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 )
    {
        if(n==factors.back())
        {
            factors[factors.size()-2]++;
        }
        else
        {
        factors.push_back(1);
        factors.push_back(n);
        }
    }
}

int main()
{
    int n,p,po;
    string s;
    seive();
    while(true)
    {
        p=1;
        getline(cin, s);
        istringstream line(s);
        while(line >> n)
        {
            if(n==0)
                break;
            line >> po;
            p*=(pow(n,po));
        }


        factors.clear();
        factorize(p-1);
        for(int i=factors.size()-1;i>0;i--)
        {
            cout << factors[i] << " ";

        }
        cout<<factors[0] << endl;
    }
}

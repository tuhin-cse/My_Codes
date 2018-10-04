#include <bits/stdc++.h>

using namespace std;

bitset<10000001> prime;
vector<int> v;
int size;

void seive()
{
    size=1000000;
    prime.set();
    prime[1]=0;
    v.push_back(2);
    for(long long i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<size;j+=(i*2))
                prime[j]=0;
            v.push_back(i);
        }

    }
}


int main()
{
    seive();
    int length=v.size();

    int t,l,u;

    cin >> t;

    while(t--)
    {
        cin >> l >> u ;
        int in[1000]={0},ck[1000]={0};
        for(int i=1;i<length;i++)
        {
            if(v[i-1]>=l && v[i]<=u)
            {
                in[(v[i]-v[i-1])]++;
                ck[(v[i]-v[i-1])]++;
            }

            if(v[i]>u)
                break;
        }

       sort(ck,ck+1000);
       if(ck[999]==ck[998] )
          cout << "No jumping champion" << endl;
       else
       {
          for(int i=0;i<1000;i++)
          {
              if(ck[999]==in[i])
              {
                  cout << "The jumping champion is " << i << endl;
              }
          }
       }
    }

    return 0;
}

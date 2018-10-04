#include <bits/stdc++.h>

using namespace std;

int lcmm[1000001];
int lastd[1000001];


void seive()
{
    int size=1000001,lcm=1;
    for(int i=0;i<size;i++)
        lcmm[i]=i;
    for(int i=1;i<size;i++)
    {
        if(lcmm[i]>1)
        {
            for(int j=i+i;j<size;j+=i)
            {
                 lcmm[j]/=lcmm[i];
            }
        }
        lcm=(lcm*lcmm[i])%1000;
       // cout << lcm << endl;
        while(lcm%10==0)
            lcm/=10;
        lastd[i]=lcm%10;

    }
}

int main()
{
    seive();
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        cout << lastd[n] << endl;
    }
    return 0;
}

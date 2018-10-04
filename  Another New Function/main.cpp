#include <bits/stdc++.h>

using namespace std;

int phi[2000001];
int depphi[2000001];

void seive()
{
    int size=2000001,c,z;
    for(int i=0;i<size;i++)
        phi[i]=i;
    for(int i=2;i<size;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<size;j+=i)
            {
                phi[j]/=i;
                phi[j]*=i-1;
            }
        }
        c=1;
        z=phi[i];
        while(z>1)
            {
                z=phi[z];
                c++;
            }
        depphi[i]=c;
    }
}

int main()
{
    seive();
    int t,m,n;
    cin >> t;
    while(t--)
    {
        int s=0;
        cin >> m >> n;
        for(int i=m;i<=n;i++)
        {
          s+=depphi[i];
        }
        cout << s << endl;
       // cout << phi[m] << " " << depphi[m] <<  endl;
    }
    return 0;
}

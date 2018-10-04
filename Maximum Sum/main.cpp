#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a=0,t,n,c=0,z=INT_MAX*(-1),f=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        if(t>=0)
        {
            a+=t;
            c++;
            f=1;
        }
        else
        {
            if(t>z)
                z=t;
        }
    }
    f==0 ? cout << z <<" 1"<<endl : cout << a << " " << c << endl;
    return 0;
}

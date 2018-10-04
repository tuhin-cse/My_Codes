#include <bits/stdc++.h>

using namespace std;

int main()
{
    double xx;
    cin >> xx;
    xx*=100;
    cout << fixed << setprecision(2) << (round(xx))/100 << endl;
    int n,x=0,s=0,z;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>> z;
        if(z>=90)
        {
            s+=z;
            x++;
        }
    }
    cout << fixed << setprecision(2) << round(((double)s)/x) << endl;
    return 0;
}

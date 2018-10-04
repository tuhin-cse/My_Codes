#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l,x,y,cx=0,cy=0,max;
    cin >> l; long long a[l];
    for(int i=0;i<l;i++)
         cin >> a[i];

    sort(a,a+l);
    max=a[l-1]-a[0];
    if(max==0)
    {
        cout << "0 " << l*(l-1)/2 << endl;
        return 0;
    }
    x=a[0];
    y=a[l-1];
    for(long long i=0;i<l;i++)
    {
         if(x==a[i])
            cx++;
         else
            break;
    }

     for(long long i=l-1;i>=0;i--)
       {
         if(y==a[i])
            cy++;
         else
            break;
    }
    cout << max << " " << cx*cy << endl;
    return 0;
}

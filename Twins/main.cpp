#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin >> l ;
    int a[l];
    int sum=0,rsum=0;
    for(int i=0;i<l;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+l);
    for(int i=l-1,j=1;i>=0;i--,j++)
    {
        rsum+=a[i];
        sum-=a[i];
        if(rsum > sum)
        {
            cout << j << endl;
        }
    }
    return 0;
}

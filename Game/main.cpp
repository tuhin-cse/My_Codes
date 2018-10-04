#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin >> l;
    int a[l];
    for(int i=0;i<l;i++)
        cin >> a[i];
    sort(a,a+l);
    (l&1) ? cout<< a[l/2] :cout << a[l/2-1] << endl;
    return 0;
}

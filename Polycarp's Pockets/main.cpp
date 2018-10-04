#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,z;
    cin >> n;
    int a[101]={0};
    for(int i=0;i<n;i++)
    {
        cin >> z;
        a[z]++;
    }
    sort(a,a+101);
    cout << a[100]<<endl;
    return 0;
}

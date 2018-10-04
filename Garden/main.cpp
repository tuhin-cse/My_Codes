#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k,n;
    cin>>k>>n;
    int a[k];
    for(int i=0;i<k;i++)
        cin>>a[i];
    sort(a,a+k);
    for(int i=k-1;i>=0;i--)
    {
        if(n%a[i]==0)
        {
            cout << n/a[i] << endl;
            return 0;
        }
    }
}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    if(k>n)
    {
        sort(a,a+n);
        cout<<a[n-1]<<endl;
          return 0;
    }

    for(int i=0;i<k;i++)
    {
        if(a[0]<a[1])
        {
            int temp=a[0];
            a[0]=a[1];
            a[1]=temp;
        }
        int temp=a[1];
        for(int j=2;j<n;j++)
            a[j-1]=a[j];
        a[n-1]=temp;
    }
    cout<<a[0]<<endl;
    return 0;
}

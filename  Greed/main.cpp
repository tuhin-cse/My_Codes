#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l;
    cin>>l;
    long int a[l], b[l];
    long long s=0;
    for(int i=0;i<l;i++)
        {
           cin>>a[i];
           s+=a[i];
        }

    for(int i=0;i<l;i++)
        cin>>b[i];
    sort(b,b+l);

    if(b[l-1]+b[l-2]>=s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}

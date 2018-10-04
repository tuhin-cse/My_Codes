#include <iostream>

using namespace std;

int main()
{
    int l=10;
    int a[l+1];
    for(int i=0;i<l;i++)
        cin>>a[i];
    cout << "Enter Position and Value :" ;

    int p,v;
    cin>> p >> v;
    for(int i=l;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=v;
    for(int i=0;i<=l;i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}

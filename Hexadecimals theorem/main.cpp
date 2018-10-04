#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n ;
    int a[100000];
    if(n==0)
    {
        cout << "0 0 0" << endl;
        return 0;
    }

    if(n==1)
       {
        cout << "0 0 1" << endl;
        return 0;
       }
    if(n==2)
        {
        cout << "0 1 1" << endl;
        return 0;
        }
    a[0]=0;
    a[1]=1;
    int i;
    for( i=2; ;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]>=n)
            break;
    }
    int z=i-4;
    if(z<1)
        z=1;
    cout << a[z] << " ";
    z=i-3;
    if(z<1)
        z=1;
    cout << a[z] << " ";
    z=i-1;
    if(z<=3)
        z=1;
    cout << a[z] <<endl;
    return 0;
}

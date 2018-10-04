#include <iostream>

using namespace std;

int main()
{
    long a[100];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<100;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    while(cin>>n)
    {
        (n==0)?return 0:cout<<a[n+1]<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long l;cin>>l;
    int a[4]={0};int x;
    for(int i=0;i<l;i++)
    {
        cin>>x;a[x]++;
    }
    while(a[1]&&a[2])
    {
        a[2]--;a[1]--;a[3]++;
    }
    while(a[1]>=3)
    {
        a[1]-=3;
        a[3]++;
    }
    cout<< a[3]<<endl;
    return 0;
}

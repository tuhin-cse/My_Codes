#include <iostream>

using namespace std;

int main()
{
    int a[100000+1]={0};
    int x,y,n;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y ;
        a[x]=y;
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y ;
        if(a[x]<y)
           a[x]=y;
    }
    int sum=0;
    for(int i=0;i<=100000;i++)
    {
        sum+=a[i];
    }
    cout << sum << endl;
    return 0;
}

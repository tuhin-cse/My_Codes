#include <iostream>

using namespace std;

int main()
{
    int l; cin >> l;
    int x[2]={0},y[2]={0};
    int a,b;
    for(int i=0;i<l;i++)
    {
        cin >> a >>b;
        x[a]++;y[b]++;
    }
    int m,n;
    x[0]<x[1] ? m = x[0] : m = x[1] ;
    y[0]<y[1] ? n = y[0] : n = y[1] ;

    cout << m+n << endl;
    return 0;
}

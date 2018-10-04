#include <iostream>

using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;
    long long pos=0;
    pos=n/2;
    if(n%2!=0)
        pos++;
    if(k<=pos)
    {
        cout << (k*2)-1 << endl;
        return 0;
    }
    k-=pos;
    cout << (2*k) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long k,l,i=-1;
    cin >> k >> l;
    while(l!=1)
    {
        if(l%k!=0)
        {
            cout << "NO" << endl;
            return 0;
        }
        l/=k;
        i++;
    }
    cout << "YES" << endl;
    cout << i << endl;
    return 0;
}

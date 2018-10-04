#include <iostream>

using namespace std;

int main()
{
    long long t ,k;
    cin >> t;
    while(t--)
    {
        cin >> k ;
        cout << (k/2)*(k-k/2) << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        cout <<k- (n%k)<< " " << (n%k) << endl;
    }
}
